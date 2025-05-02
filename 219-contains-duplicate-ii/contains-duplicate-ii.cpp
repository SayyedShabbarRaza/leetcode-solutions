class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int r=0,l=0;
        int n=nums.size();
        unordered_set<int>uset;
        while(r<n){
            if(abs(l-r)>k){
                uset.erase(nums[l]);
                l++;
            }
            if(uset.count(nums[r]))return true;

            uset.insert(nums[r]);
            r++;
        }
        return false;
    }
};