class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>uset(nums.begin(),nums.end());

        if(nums.size()==uset.size()){
            return false;
        }else{
            return true;
        }
    }
};