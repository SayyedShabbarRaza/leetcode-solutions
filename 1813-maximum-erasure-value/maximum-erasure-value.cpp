class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
         unordered_set<int> Hashset;
        int left = 0, cumSum = 0;
        int maxSum=0;

        for (int right = 0; right < nums.size(); right++) {
            while (Hashset.find(nums[right]) != Hashset.end()) {
                Hashset.erase(nums[left]);
                cumSum -=nums[left];
                left++;
            }
            Hashset.insert(nums[right]);
            cumSum +=nums[right];
            maxSum=max(maxSum,cumSum);
        }

        return maxSum;
    }
};