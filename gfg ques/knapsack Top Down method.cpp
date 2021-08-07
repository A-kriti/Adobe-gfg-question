// ques - https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    
    //int max(int a, int b) { return (a > b) ? a : b; }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
     int t[n+1][W+1];
     
     for(int i=0;i<=n;i++){
          for(int j=0;j<=W;j++){
              
              if(i==0 || j==0){
                  t[i][j]=0;
              }
          }
     }
     
     for(int i=1;i<=n;i++){
          for(int j=1;j<=W;j++){
              
              if(wt[i-1]<=j){
                  
                  t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
              }
              
              else{
                  t[i][j]=t[i-1][j];
              }
              
              
          }
     }
     
     
     
    return t[n][W];
     
     
    }
};
