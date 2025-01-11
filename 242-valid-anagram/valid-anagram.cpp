class Solution {
public:
    bool isAnagram(string s, string t) {
        int sn=s.size();
        int tn=t.size();
        int count=0;
        for(int i=0;i<sn;i++){
            for(int j=0;j<tn;j++){
                if(s[i]==t[j]){
                    t[j]='1';
                    count++;
                    break;
                }
            }
        }

        if(count==sn){
            if(sn==tn){
            return true;
            }else{
                return false;
            }
        }
        else{
            return false;
        }
    }
};