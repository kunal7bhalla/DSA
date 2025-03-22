//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        
       int temp=n;
       
       int count=0;
       
       while(temp>0){
           count++;
           temp=temp/10;
       }
       
       int sum=0;
       
       temp=n;
       
       while(temp>0){
           
           int store=1;
           int rem=temp%10;
           
           for(int i=0;i<count;i++){
               store=store*rem;
           }
           
           sum+=store;
           
           temp=temp/10;
       }
       
       if(sum==n){
           return true;
       }
        
        return false;
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
        bool flag = ob.armstrongNumber(n);
        if (flag) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends