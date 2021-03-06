class Solution {
public:
   
    void recurse(map<char,vector<char>>m,string& digits,int ind,string st,int n,vector<string>& ans)
    {
        if(ind==n)
        {
         ans.push_back(st);
         return;
        }     
        
        for(auto it:m[digits[ind]])
        recurse(m,digits,ind+1,st+it,n,ans);

            
    }
    vector<string> letterCombinations(string digits) {
       
        vector<string>ans;
        if(digits.size()==0)
        return ans;    
        map<char,vector<char>>m;
        m['1']={};
        m['0']={};
        m['2']={'a','b','c'};
        m['3']={'d','e','f'};
        m['4']={'g','h','i'};
        m['5']={'j','k','l'};
        m['6']={'m','n','o'};
        m['7']={'p','q','r','s'};
        m['8']={'t','u','v'};
        m['9']={'w','x','y','z'};
        
        string st="";

        int n=digits.size();
        recurse(m,digits,0,st,n,ans);       
                              
         return ans;
               
    }
};