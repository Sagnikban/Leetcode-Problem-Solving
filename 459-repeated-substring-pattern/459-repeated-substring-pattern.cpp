class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string st="";
        int s_l=s.length();
        for(int i=0;i<s_l-1;i++)
        {
            st+=s[i];
            if(s.length()%st.length()!=0)
            continue;
            
            else
            {
                string temp="";
                int l=s.length()/st.length();
                for(int i=0;i<l;i++)
                temp+=st;
                
                if(temp==s)
                {
                    cout<<st<<endl;
                    return true; 
                }
                   
            }
        }
        return false;
    }
};