class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int l = 0;
        int r = 0;
        int length=0;
        int currentCost=0;
        while (r < n) {
            currentCost+=abs(t[r]-s[r]);
            while(currentCost>maxCost){
                currentCost-=abs(t[l]-s[l]);
                l++;
        }

            length = max(length, r - l + 1);
            r++;     
        }
        return length;
    }
};