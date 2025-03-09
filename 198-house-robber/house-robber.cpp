class Solution {
public:
    int solveMem(vector<int>& nums,int n,vector<int>& dp){

        if(n<0){
            return 0;
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        int inc=solveMem(nums,n-2,dp)+nums[n];

        int exce=solveMem(nums,n-1,dp)+0;

        dp[n]=max(inc,exce);

        return dp[n];
    }
    int rob(vector<int>& nums) {

        int n=nums.size();
        vector<int> dp(n,-1);

        return solveMem(nums,n-1,dp);
        
    }
};