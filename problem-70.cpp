class Solution {
public:
    int climbStairs(int n) {
         if (n == 0 || n == 1) {
            return 1;
        }
        int prevStairs = 1, currStairs = 1;
        for (int i = 2; i <= n; i++) {
            int temp = currStairs;
            currStairs = prevStairs + currStairs;
            prevStairs = temp;
        }
        return currStairs;
    }
};