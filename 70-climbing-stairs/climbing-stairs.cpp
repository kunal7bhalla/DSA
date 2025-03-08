class Solution {
public:
    int solvemem(int n,vector<int>& dp){
        if(n==0 ||n==1){
            return 1;
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        dp[n]=solvemem(n-1,dp)+solvemem(n-2,dp);

        return dp[n];
    }
    int climbStairs(int n) {

        vector<int> dp(n+1,-1);

        return solvemem(n,dp);
        
    }
};