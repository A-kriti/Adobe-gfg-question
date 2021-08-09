// ques - https://leetcode.com/problems/target-sum/

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int n=nums.size();
        int sum=0;
        int num_zero=0;
        for(int k=0;k<n;k++){
            sum+=nums[k];
            if(nums[k]==0){
                num_zero++;
            }
            
        }
        
      
        if(sum < target || (sum + target)%2 == 1){
            return 0;
        }
        
        else{
        int s=(sum+target)/2;
            
        int t[n+1][s+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=s;j++){
                if(i==0){
                    t[i][j]=0;
                }
                if(j==0){
                    t[i][j]=1;
                }
        }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=s;j++){
                
                if(nums[i-1] == 0){
                    t[i][j] = t[i-1][j];
                }
                else if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j-nums[i-1]]+t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
        }
        }
        
     return pow(2, num_zero) * t[n][s];
        
        } 
    }
};

