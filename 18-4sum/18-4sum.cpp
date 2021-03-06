class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>result;
        
        
        for(int i=0;i<n;i++)
        {
            
            for(int j=i+1;j<n;j++)
            {
                int search=target-nums[i]-nums[j];
                
                int left=j+1;
                int right=n-1;
                
                
                while(left<right)
               {
                    
                 if(nums[left]+nums[right]==search)
                   {
                     vector<int>ans;
                     ans.push_back(nums[i]);
                     ans.push_back(nums[j]);
                     ans.push_back(nums[left]);
                     ans.push_back(nums[right]);
                     result.push_back(ans);
                     left++;
                     right--;
                     
                     //handling duplicates of 3rd number
                     while(left<right && nums[left]==ans[2])
                     left++;
                     //handling duplicates of 4th number
                     while(left<right && nums[right]==ans[3])
                     right--;    
                    }
                    else
                    if(nums[left]+nums[right]>search)
                    {
                      right--;  
                    }
                     else if(nums[left]+nums[right]<search)
                    {
                         left++;
                     }
               }
                
                //handling duplicates of 2nd number
                while(j<n-1 && nums[j]==nums[j+1])
                j++;
                
            }
               //handling duplicates of 1st number
               while(i<n-1 && nums[i]==nums[i+1])
               i++;   
        }
        
        
        return result;
    }
};