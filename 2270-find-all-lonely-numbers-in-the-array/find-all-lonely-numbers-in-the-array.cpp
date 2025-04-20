class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int>umap;

        for(int c:nums){
            umap[c]++;
        }

        for(auto &[k,v]:umap){
            if(v==1&&umap.find(k+1)==umap.end()&&umap.find(k-1)==umap.end()){
                ans.push_back(k);
            }
        }
        return ans;
    }
};