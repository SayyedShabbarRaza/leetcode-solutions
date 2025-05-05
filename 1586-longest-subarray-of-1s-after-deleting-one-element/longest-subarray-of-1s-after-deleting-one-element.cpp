class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0;
        int isZero=0;
        int n=nums.size();
        int length=0;
        int currentCount=0;

        while(r<n){
            if(nums[r]==0){
                isZero++;
            }else{
                currentCount++;
            }
            
            while(isZero>1){
               if(nums[l]==0)isZero--;
                l++;
            }
            length=max(length,r-l+1);
            r++;
        }
        return length-1;
    }
};