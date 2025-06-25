class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size(),i=0,j=0,size=0,m=p.size(),masla=0;
        vector<int>ans;
        unordered_map<char,int>umap;

        for(char c:p){
            umap[c]++;
        }
        while(j<n){
        if(umap.find(s[j])!=umap.end()&&masla<m){
            if(umap[s[j]]>0)masla++;
            umap[s[j]]--;
        }
        else{
            if(umap.find(s[i])!=umap.end()){
            umap[s[i]]++;
            if(umap[s[i]]>0)masla--;    //aggar condition use na ho to means aik window mein duplicate values ny hi required jagha puri kr di or kaha sab letters aa gaye hain 
            }                
            i++;
        }

            size=j-i+1;
            if(size==m){ //Window mein sab elements aa gaye if masla==m
                if(masla==m){
                ans.push_back(i);
                if(umap.find(s[i])!=umap.end()){
                umap[s[i]]++;
                masla--;
                // j=i;..//x               count--;
                }
                i++;
                }else{
                    if(umap.find(s[i])!=umap.end()){
                    umap[s[i]]++;
                    if(umap[s[i]]>0)masla--;
                    }
                    i++;
                }

            }
        
        j++;

        }
    return ans;
    }
};