class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(nums[i]+nums[j]==target&&i!=j){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};