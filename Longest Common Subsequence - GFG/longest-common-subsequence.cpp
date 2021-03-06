// { Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    
    int l(int x,int y,string s1,string s2,int dp[1001][1001])
    {
         // your code here
         if(x<0 ||y<0)
         return 0;
         
        if(dp[x][y]!=-1)
        return dp[x][y];
        
        if(s1[x]==s2[y])
        return dp[x][y]=1+l(x-1,y-1,s1,s2,dp);
        
        return dp[x][y]=max(l(x-1,y,s1,s2,dp),l(x,y-1,s1,s2,dp));
    }
    int lcs(int x, int y, string s1, string s2)
    {
      int dp[1001][1001];
      for(int i=0;i<1001;i++)
      {
          for(int j=0;j<1001;j++)
          dp[i][j]=-1;
      }
       return l(x-1,y-1,s1,s2,dp);
       return dp[x-1][y-1];
    }
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends