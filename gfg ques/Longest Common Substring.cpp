// ques - https://www.geeksforgeeks.org/longest-common-substring-dp-29/

public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        int t[n+1][m+1];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
            
            if(i==0||j==0){
                t[i][j]=0;
            }
            
        }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
            
            if(S1[i-1]==S2[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            else{
                t[i][j]=0;
            }
            
            }
        }
        
        int max_num=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(t[i][j]>max_num){
                    max_num=t[i][j];
                }
            }
        }
        return max_num;
            
            
    }
};
