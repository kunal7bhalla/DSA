// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        string s1="";
        stack<int> st;
        
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }
        
        return s1;
        
        
    }
};
