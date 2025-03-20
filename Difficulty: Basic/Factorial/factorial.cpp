//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
  int solve(int n){
      
      if(n==0){
          return 1;
          
      }
      
      return n*solve(n-1);
  }
    int factorial(int n) {
        // code here
        return solve(n);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.factorial(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends