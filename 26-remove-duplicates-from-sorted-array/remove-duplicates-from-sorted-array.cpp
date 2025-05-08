class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int>uset;
        int n=nums.size();
        int i=0;
        while(i<nums.size()){
            if(!uset.count(nums[i])){
                uset.insert(nums[i]);
                i++;
            }else{
                nums.erase(nums.begin()+i);
            }
        }
        return nums.size();
    }
};



        // for(int i=0;i<n;i++){
        //     if(!uset.count(nums[i])){
        //         uset.insert(nums[i]);
        //     }else{
        //         nums.erase(nums.begin()+i);
        //     }
        // }
