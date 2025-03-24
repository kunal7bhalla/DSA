//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        // Your code here
        
        unordered_map<char,int> mp;
        
        int n=s.length();
        
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        
        char max=s[0];
        int count=mp[s[0]];
        
        for(auto it:mp){
            
            if(it.second>count || it.second==count && it.first<max){
                max=it.first;
                count=it.second;
            }
        }
        
        return max;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends