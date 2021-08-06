// ques - https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1#

#include<bits/stdc++.h>
using namespace std;


int searchInSorted(int arr[], int N, int K) 
{ 
    
       // Your code here
       
       int l=1;
       int r=N;
       
       while(l<=r){
           
           int m=(l+r)/2;
           
           if(arr[m]==K){
               return 1;
           }
           
           else if(arr[m]>K){
               
               r=m-1;
               
           }
           
           else{
               
               l=m+1;
           }
           
           
           
       }
       
    return -1;
       
}


int main()
{
    
    int N=5;
    int K = 6;
    int arr[]={1,2,3,4,6};
    
    cout<<searchInSorted(arr, N,K);

    return 0;
}
