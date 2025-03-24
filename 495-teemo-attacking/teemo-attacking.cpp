class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if (timeSeries.empty()) return 0;

        int totalDuration = 0;
        for (int i = 1; i < timeSeries.size(); i++) {
            totalDuration += min(duration, timeSeries[i] - timeSeries[i - 1]);
        }

        return totalDuration + duration; // Add duration for the last attack
    }
};
