// ques - https://leetcode.com/problems/longest-palindromic-subsequence/

class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        
        
        int x=s.length();
             
        string c = s;
        reverse(c.begin(), c.end());
        
        
        int t[x+1][x+1];
        
        for(int i=0;i<=x;i++){
            for(int j=0;j<=x;j++){
            
                if(i==0|j==0){
                    t[i][j]=0;
                }
        }
        }
        
        
        for(int i=1;i<=x;i++){
            for(int j=1;j<=x;j++){
            
                if(s[i-1]==c[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                }
                     
                else{
                    t[i][j]=max(t[i-1][j],t[i][j-1]);
                }
        }
        }
                     
        return t[x][x];
        
        
        
    }
};
