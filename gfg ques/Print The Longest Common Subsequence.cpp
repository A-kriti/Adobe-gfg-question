// link - https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/problem
#include <bits/stdc++.h>
using namespace std;


vector<int> longestCommonSubsequence(vector<int> a, vector<int> b) {


    int x=a.size();
    int y=b.size();
    int t[x+1][y+1];
    
    for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
        
        if(i==0|j==0){
            t[i][j]=0;
        }
    }
    }
    
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
        
        if(a[i-1]==b[j-1]){
            t[i][j]=1+t[i-1][j-1];
        }
        else{
            
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    }
    
    int i=x;
    int j=y;
    vector<int> s;
    while(i>0 & j>0){
        
        if(a[i-1]==b[j-1]){
            s.push_back(a[i-1]);
            i--;
            j--;
        }
        else{
            if(t[i][j-1]>t[i-1][j]){
                j--;
            }
            
            else{
                i--;
            }
        }
    }
    
    reverse(s.begin(),s.end());
    
    return s;
}


int main() {
    
    vector<int> a={1,2 ,3, 4 ,1};
    vector<int> b={3 ,4 ,1 ,2, 1, 3,4,9};
    vector<int> p;
    p=longestCommonSubsequence(a, b);
	for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
    
    
	return 0;
}
