//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
  
  int solveMem(int N,int K,vector<int>& dp){
      
      if(N<=0){
            return 0;
        }
        
        if(dp[N]!=-1){
            return dp[N];
        }
        
        int inc=K+solveMem(N-2,K,dp);
        int exc=0+solveMem(N-1,K,dp);
        
        dp[N]=max(inc,exc);
        
        return dp[N];
      
  }
    int maximizeMoney(int N , int K) {
        // code here
        
        vector<int> dp(N+1,-1);
        
        return solveMem(N,K,dp);
        
        
        
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;

        cin>>N>>K;

        Solution ob;
        cout << ob.maximizeMoney(N,K) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends