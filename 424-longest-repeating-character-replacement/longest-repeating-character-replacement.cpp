class Solution {
public:
    int characterReplacement(string s, int k) {
        //intituion:4 min
        //can't find solution until att 22 mins go for solution
        //can't find solution until att 35 mins go for solution ==>go for tutorial
        int n=s.size();
        int l=0,r=0;
        int length=0,maxCount=0;
        unordered_map<char,int>umap;

        while(r<n){
            umap[s[r]]++;
            maxCount=max(maxCount,umap[s[r]]);
            while((r-l+1)-maxCount>k){
                umap[s[l]]--;
            maxCount=max(maxCount,umap[s[r]]);
                l++;
            }
            length=max(length,r-l+1);
            r++;
        }
        return length;
        
    }
};