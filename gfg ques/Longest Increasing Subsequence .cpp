// ques - https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       
       //vector<int> t;
       int t[n];
       
       for(int i=0;i<n;i++){
        
        t[i]=1;
       
       }
       
       
       for(int i=1;i<n;i++){
           for(int j=0;j<i;j++){
               
            if(a[i]>a[j] && t[i]<t[j]+1){
                t[i]=t[j]+1;
            }
            
       }
       }
       
       
       int z=*max_element(t,t+n);
       return z;
    }
};
