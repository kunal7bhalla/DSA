class Solution {
public:
    bool isPalindrome(string s) {

        stack<char> st;
        string s2;

        for(int i=0;i<s.size();i++){

            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                char c = tolower(s[i]); // normalize case
                s2 += c;
                st.push(c);
            }

        }

        string s1="";

        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }


        for(int i=0;i<s1.size();i++){

            if(s1[i]!=s2[i]){
                return false;
            }
        }


        return true;
        
    }
};