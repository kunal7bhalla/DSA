class Solution {
public:
    int solveMem(vector<int>& nums,int n,int startidx,vector<int>& dp){
        if(n<startidx){
            return 0;
        }

        if(dp[n]!=-1){
            return dp[n];
        }

        int inc=nums[n]+solveMem(nums,n-2,startidx,dp);

        int exc=0+solveMem(nums,n-1,startidx,dp);

        dp[n]=max(inc,exc);

        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();

        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);

        if(n==1){
            return nums[0];
        }

        return max(solveMem(nums,n-1,1,dp1),solveMem(nums,n-2,0,dp2));
        
    }
};