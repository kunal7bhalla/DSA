class Solution {
public:
    string reverseWords(string s) {

        stack<string> st;
        s.push_back(' ');

        string s1;

        for(int i=0;i<s.size();i++){

            if(s[i]!=' '){
                s1+=s[i];
            }
        else{

            if(!s1.empty()){
                st.push(s1);
                s1="";
            }
            }
        }

        string s2;

        while(!st.empty()){
            s2+=st.top();
            s2+=' ';
            st.pop();
        }

        s2.pop_back();


        return s2;
        
    }
};