class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        string vowel;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'A' ||s[i] == 'a' || s[i] == 'E' ||s[i] == 'e' ||
                s[i] == 'I' ||s[i] == 'i' || s[i] == 'O' ||s[i] == 'o' ||
                s[i] == 'U' ||s[i] == 'u') {
                    vowel=vowel+s[i];
            }
        }
        // IeeA (0123)
        //eeoe (0123)
        int sn=vowel.size()-1;
        for(int i=0;i<n;i++){
            if(s[i] == 'A' ||s[i] == 'a' || s[i] == 'E' ||s[i] == 'e' ||
                s[i] == 'I' ||s[i] == 'i' || s[i] == 'O' ||s[i] == 'o' ||
                s[i] == 'U' ||s[i] == 'u'){
                    s[i]=vowel[sn];
                    sn--;
                }
        }
        return s;
    }
};