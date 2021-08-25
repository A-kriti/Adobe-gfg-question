// ques - https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#


class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        
        int x= sum/2;
        int t[N+1][x+1];
        
        if(sum%2!=0){
            return 0;
        }
        
        for(int i=0;i<=N;i++){
            for(int j=0;j<=x;j++){
            
                if(i==0){
                    t[i][j]=0;
                }
                if(j==0){
                    t[i][j]=1;
                }
                
        }
            
        }
        
        
        for(int i=1;i<=N;i++){
            for(int j=1;j<=x;j++){
            
                if(arr[i-1]<=j){
                    t[i][j]=t[i-1][j-arr[i-1]]|| t[i-1][j];
                }
                else{
                    t[i][j]=t[i-1][j];
                }
                
        }
            
        }
        
        return t[N][x];
    }
};
