class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sn=s.size();
        int tn=t.size();
        unordered_map<char,char>s_to_t;
        unordered_map<char,char>t_to_s;        
        if(sn!=tn)return false;

        for(int i=0;i<sn;i++){
            if(s_to_t.count(s[i])){
                if(s_to_t[s[i]]!=t[i])return false;
            }else{
                s_to_t[s[i]]=t[i];
            }

            if(t_to_s.count(t[i])){
                if(t_to_s[t[i]]!=s[i])return false;

            }else{
                t_to_s[t[i]]=s[i];
            }
        }
    return true;
    }
};