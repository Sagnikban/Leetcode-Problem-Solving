class Solution {
public:

    int mincostTickets(vector<int>& days, vector<int>& costs) {
    vector<int> dp(366,0);
        unordered_set<int> traveldays(days.begin(),days.end());
        
        for(int i = 1;i < 366;i++){
            if(traveldays.find(i) == traveldays.end()){
                dp[i] = dp[i-1];
            }
            else{
                dp[i] = min({dp[i-1]+costs[0],dp[max(0,i-7)]+costs[1],dp[max(0,i-30)]+costs[2]});
            }
        }
        return dp[365];
    }
};