class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        int mx=0;

        while(i<j){
            mx=max(mx,nums[i]+nums[j]);
            i++;
            j--;
        }
        return mx;
    }
};