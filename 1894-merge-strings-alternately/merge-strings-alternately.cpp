class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mString;
        int n1 = word1.size();
        int n2 = word2.size();
    int i=0;
    int j=0;
        while(i<n1&&j<n2){
            mString=mString+word1[i++];
            mString=mString+word2[j++];
        }

        while(i<n1){
            mString=mString+word1[i++];
        }
        while(j<n2){
            mString=mString+word2[j++];
        }
        return mString;

    }
};