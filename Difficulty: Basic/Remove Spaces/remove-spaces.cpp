//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string modify(string& s) {
        // code here.
        
        int n=s.length();
        
        string st="";
        
        
        for(int i=0;i<n;i++){
            
            if(s[i]!=' '){
                st.push_back(s[i]);
            }
        }
        
        return st;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.modify(s) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends