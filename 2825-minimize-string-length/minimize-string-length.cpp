class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char,int>umap;

        for(int c:s){
            umap[c]++;
        }
        return umap.size();
        
    }
};