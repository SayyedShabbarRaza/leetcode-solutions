class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string sp;
        for(int i=0;i<n;i++){
            if(s[i]<='Z'&&s[i]>='A'){
                sp+=s[i]+32;
            }if(s[i]>='a'&&s[i]<='z'){
                sp+=s[i];
            }if(s[i]<='9'&&s[i]>='0'){
                // return false;
                sp+=s[i];
            }
        }
        int ns=sp.size();
        for(int i=0;i<ns;i++){
            if(sp[i]!=sp[ns-1-i]){
                return false;
            }
        }
        return true;
    }
};

//s[i]<='z'||s[i]>='a'||s[i]<='Z'||s[i]>='A'||
