class Solution {
public:
    bool isValid(string s) {
          int len = s.size();
        if(s[0]==')' || s[0]=='}' || s[0]==']') return false;  //if the first bracket present is a closing bracket, directly return false.
        stack<char>st;
        for(int i=0;i<len;i++)
        {
            if(!st.empty() && st.top()=='(' && s[i]==')' ) 
            st.pop(); // if corresponding closing bracket is found, pop the stack element and don't push.
            else if(!st.empty() && st.top()=='{' && s[i]=='}') st.pop();
            else if(!st.empty() && st.top()=='[' && s[i]==']') st.pop();
            else st.push(s[i]); 
        }
        return st.empty(); 
    }
};