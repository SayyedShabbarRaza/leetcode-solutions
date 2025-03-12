class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int max=-1;
        int i=0;
        int j=i+1;
        while(j<n){
            if(nums[i]<nums[j]&&max<(nums[j]-nums[i])){
                max=nums[j]-nums[i];
                // i++;
                j++;
            }else{
                // i++;
                j++;
            }
            if(j==n){
            i++;
            j=i+1;
            }

        }
        return max;
    }
};