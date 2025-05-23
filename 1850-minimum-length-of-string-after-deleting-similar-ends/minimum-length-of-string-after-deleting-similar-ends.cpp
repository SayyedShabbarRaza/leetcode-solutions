class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int i = 0, j = n - 1;
        int count=0;
        while (i < j) {
            if (s[i] == s[j]) {
                char ch=s[i];

                while (i<j&&s[i] == ch) {
                    i++;
                }
                while (j>=i&&s[j] == ch) {
                    j--;
                }
            } else{
                break;
            }
        }
        return j-i+1;
    }
};