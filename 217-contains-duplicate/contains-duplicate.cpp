class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>uset;

        for(int num:nums){
            if(uset.count(num)){
                return true;
            }else{
                uset.insert(num);
            }
        }
        return false;
    }
};