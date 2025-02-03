class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int count=0;
        bool isEnter=false;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '&&isEnter){
                break;
            }else if(s[i]==' '){

            }            
            else{
                isEnter=true;
                count++;
            }
        }
        return count;

    }
};