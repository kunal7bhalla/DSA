//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string reciprocalString(string S)
    {
        // Write Your code here
        
        string st="";
        
        for(int i=0;i<S.length();i++){
            
            if(S[i]==' '){
                st+=S[i];
            }
            
            else if(S[i]>='A' && S[i]<='Z'){
                st+='Z'-(S[i]-'A');
            }
            
            else if(S[i]>='a' && S[i]<='z'){
                st+='z'-(S[i]-'a');
            }
            
            else{
                st+=S[i];
            }
        }
        
        return st;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    
cout << "~" << "\n";
}

	return 0;
}
// } Driver Code Ends