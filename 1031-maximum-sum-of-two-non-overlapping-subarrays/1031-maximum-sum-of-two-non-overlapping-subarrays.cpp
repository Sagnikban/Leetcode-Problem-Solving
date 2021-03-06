class Solution {
public:
   int solve(vector<int>&nums,int f,int s,int n){
    int dp1[n];
    int dp2[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        if(i<f){
            sum+=nums[i];
            dp1[i] = sum;
        }else{
            sum += nums[i]-nums[i-f];
            dp1[i] = max(dp1[i-1],sum);
        }
    }
    sum = 0;
    for(int i=n-1;i>=0;i--){
        if(i+s>=n){
            sum+=nums[i];
            dp2[i] = sum;
        }else{
            sum += nums[i]-nums[i+s];
            dp2[i] = max(dp2[i+1],sum);
        }
    }
    int c = 0;
    for(int i=f-1;i<n-s;i++){
        c = max(c,dp1[i]+dp2[i+1]);
    }
    return c;
}
int maxSumTwoNoOverlap(vector<int>& nums, int f, int s) {
    int n = nums.size();
    
    int c1 = solve(nums,f,s,n);
    int c2 = solve(nums,s,f,n);
    return max(c1,c2);
}
};