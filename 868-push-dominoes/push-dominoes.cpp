class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        vector<int> LtoR(n, -1); // Time since last 'R' from left
        vector<int> RtoL(n, -1); // Time since last 'L' from right
        string ans(n, '.');

        // Traverse from left to right for 'R'
        int time = -1;
        for (int i = 0; i < n; ++i) {
            if (dominoes[i] == 'R') {
                time = 0;
                LtoR[i] = time;
            } else if (dominoes[i] == 'L') {
                time = -1;
            } else if (time != -1) {
                time++;
                LtoR[i] = time;
            }
        }

        // Traverse from right to left for 'L'
        time = -1;
        for (int i = n - 1; i >= 0; --i) {
            if (dominoes[i] == 'L') {
                time = 0;
                RtoL[i] = time;
            } else if (dominoes[i] == 'R') {
                time = -1;
            } else if (time != -1) {
                time++;
                RtoL[i] = time;
            }
        }

        // Final decision at each position
        for (int i = 0; i < n; ++i) {
            if (LtoR[i] == -1 && RtoL[i] == -1)
                ans[i] = dominoes[i]; // stays same
            else if (LtoR[i] == -1)
                ans[i] = 'L';
            else if (RtoL[i] == -1)
                ans[i] = 'R';
            else if (LtoR[i] < RtoL[i])
                ans[i] = 'R';
            else if (RtoL[i] < LtoR[i])
                ans[i] = 'L';
            else
                ans[i] = '.';
        }

        return ans;
    }
};
