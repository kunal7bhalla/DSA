//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        
        if(s1.length()!=s2.length()){
            return false;
        }
        
        unordered_map<char,int> freq;
        
        
        for(int i=0;i<s1.length();i++){
            freq[s1[i]]++;
            
            freq[s2[i]]--;
        }
        
        for(auto it:freq){
            if(it.second!=0){
                return false;
            }
        }
        
        return true;
    }
};


//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends