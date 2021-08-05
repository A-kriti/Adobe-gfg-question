//W<=1000 and n<=1000


int static t[1002][1002];

//memset(t,-1,sizeof(t));

auto x = memset(t, -1, sizeof(t));

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    
    
    
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       if(n==0 || W==0){
           return 0;
       }
       
       /*if(t[n][W]!=-1){
           return t[n][W];
       }*/
       else if(wt[n-1]>W){
           
        return knapSack(W,wt,val,n-1);
           
       }
       
       else{
           
        return  max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
       }
       
       
       
       
    }
};
