class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> uset;
        int n = nums.size();
        int j = 1;
        int i = 0;
        while (j < n) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i+1;
    }
};

// for(int i=0;i<n;i++){
//     if(!uset.count(nums[i])){
//         uset.insert(nums[i]);
//     }else{
//         nums.erase(nums.begin()+i);
//     }
// }
