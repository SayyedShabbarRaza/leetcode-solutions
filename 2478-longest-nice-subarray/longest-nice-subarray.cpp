class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int left = 0;      // start of window
        int usedBits = 0;  // keeps track of all 1s in current window
        int maxLength = 0; // final answer

        for (int right = 0; right < nums.size(); ++right) {
            // If nums[right] shares any bit with usedBits, shrink from left
            while ((usedBits & nums[right]) != 0) {
                usedBits ^= nums[left]; // remove nums[left] from usedBits
                left++;                 // move window start forward
            }

            usedBits |= nums[right]; // include nums[right] in window
            maxLength = max(maxLength, right - left + 1); // update max length
        }

        return maxLength;
    }
};
