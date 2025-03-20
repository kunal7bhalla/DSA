//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        
        vector<int> arr1;
        
        int i=0;
        while(i<arr.size()){
            arr1.push_back(arr[i]);
            i+=2;
        }
        return arr1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution sln;
        vector<int> list = sln.getAlternates(arr);
        for (int i : list)
            cout << i << " ";
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends