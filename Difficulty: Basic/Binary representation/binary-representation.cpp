//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string getBinaryRep(int n) {
        // Write Your Code here
        
        int temp=n;
        
        string s="";
        
        if(temp==0){
            s="0";
        }
        
        while(temp>0){
            
            int rem=temp%2;
            s.push_back('0'+rem);
            
            temp=temp/2;
            
        }
        
        while(s.size()!=32){
            s.push_back('0');
        }
        
        reverse(s.begin(),s.end());
        
        return s;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        string ans = ob.getBinaryRep(n);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends