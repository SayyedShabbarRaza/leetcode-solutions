class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxDist = 0; 
        
        // Compare first house with the farthest different one
        for (int j = n - 1; j > 0; --j) {
            if (colors[0] != colors[j]) {
                maxDist = max(maxDist, j - 0);
                break; // No need to check further
            }
        }

        // Compare last house with the farthest different one
        for (int i = 0; i < n - 1; ++i) {
            if (colors[i] != colors[n - 1]) {
                maxDist = max(maxDist, (n - 1) - i);
                break; // No need to check further
            }
        }

        return maxDist;
    }
};
