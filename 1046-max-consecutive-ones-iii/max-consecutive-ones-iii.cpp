class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        int zeros=0;
        int length=0;
        while(r<n){
            zeros+=nums[r]==0?1:0;

            while(zeros>k){
                zeros-=nums[l]==0?1:0;
                l++;
            }
            length=max(length,r-l+1);
            r++;
        }
        return length;
    }
};