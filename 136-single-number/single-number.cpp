class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>umap;

        for(int num:nums){
            umap[num]++;
        }
        for(int map:nums){
            if(umap[map]==1){
                return map;
            }
        }
        return -1;

    }
};