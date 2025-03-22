//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
  
  bool palindrome(int sum){
      
      int rev=0;
      
      int temp=sum;
      
      while(temp>0){
          
          int rem=temp%10;
          
          rev=rev*10+rem;
          
          temp=temp/10;
      }
      
      if(rev==sum){
          return true;
      }
      
      return false;
  }

    bool isDigitSumPalindrome(int n) {
        // code here
        
        int temp=n;
        
        int sum=0;
        
        while(temp>0){
            
            int rem=temp%10;
            
            sum+=rem;
            
            temp=temp/10;
        }
        
        return palindrome(sum);
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
        bool res = ob.isDigitSumPalindrome(N);
        if (res)
            cout << "true"
                 << "\n";
        else
            cout << "false"
                 << "\n";

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends