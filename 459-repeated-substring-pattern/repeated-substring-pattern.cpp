class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        int times=0;
        for(int i=n/2;i>=1;i--){
            if(n%i==0){
            times=n/i;
            string pattern=s.substr(0,i);
            string newStr="";

            while(times--){
                newStr+=pattern;
            }
            if(newStr==s){
                return true;
            }
            }
        }
        return false;
    }
};