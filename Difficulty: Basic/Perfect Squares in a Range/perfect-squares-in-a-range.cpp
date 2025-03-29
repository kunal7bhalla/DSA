//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    int numOfPerfectSquares(int a, int b) {
        // code here
        
        int count=0;
        
        for(int i=a;i<=b;i++){
            
            int sr=floor(sqrt(i));
            
            if(sr*sr==i){
                count++;
            }
        }
        
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.numOfPerfectSquares(a,b) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends