// ques - https://www.hackerrank.com/contests/hackerrank-internship-challenges/challenges/diagonal-difference/submissions/code/1336373674


int diagonalDifference(vector<vector<int>> arr) {

    int n=arr.size();
    int m=arr[0].size();
    int sum_d=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                sum_d+=arr[i][j];
            }
            
        }
    }
    int q1=n-1;
    int q2=0;
    int sum_u=0;
    while(q1>=0 && q2<m){
        
        sum_u+=arr[q1][q2];
        q1--;
        q2++;
        
    }
    
    int ans=abs(sum_d-sum_u);
    return ans;
}
