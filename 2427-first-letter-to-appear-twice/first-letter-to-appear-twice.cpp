class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>umap;

        for(char x:s){
            umap[x]++;
            if(umap[x]==2){
                return x;
            }
        }
        return -1;
    }
};