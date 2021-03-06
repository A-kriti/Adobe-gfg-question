// ques - https://www.interviewbit.com/problems/length-of-longest-subsequence/

int Solution::longestSubsequenceLength(const vector<int> &A) {

    int n=A.size();
    int t1[n];
    int t2[n];

    for(int i=0;i<n;i++){
        t1[i]=1;
        t2[i]=1;
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[i]>A[j] && t1[i]<t1[j]+1){
                t1[i]=t1[j]+1;
            }

        }
    }

   


    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(A[i]>A[j] && t2[i]<t2[j]+1){
                t2[i]=t2[j]+1;
            }

        }
    }

    int ans=0;
    for(int i=0;i<n;i++)
     ans=max(ans,t1[i]+t2[i]-1);
    return ans;

    

}
