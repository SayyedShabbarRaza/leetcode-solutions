class Solution {
public:
    int climbStairs(int n) {
      if (n == 1) return 1;
        if (n == 2) return 2;

        int secondLast = 1;  // f(n-2)
        int last = 2;        // f(n-1)

        for (int i = 3; i <= n; i++) {
            int current = last + secondLast; // f(n) = f(n-1) + f(n-2)
            secondLast = last;
            last = current;
        }

        return last;
    }
};