// 70. Climbing Stairs

class Solution {
    int dp[46];
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        if(dp[n]!=0) return dp[n];
        return dp[n]=climbStairs(n-1)+climbStairs(n-2);
      // O(n) Time
    }
};
