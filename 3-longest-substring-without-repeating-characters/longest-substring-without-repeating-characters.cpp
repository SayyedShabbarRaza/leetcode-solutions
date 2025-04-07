class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> Hashset;
        int left = 0, maxLength = 0;

        for (int right = 0; right < s.size(); right++) {
            while (Hashset.find(s[right]) != Hashset.end()) {
                Hashset.erase(s[left]);
                left++;
            }
            Hashset.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
