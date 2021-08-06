
#include<bits/stdc++.h>
using namespace std;


int searchInSorted(int arr[], int l, int r, int K) 
{ 
    
       // Your code here
       
       if(l==r){
           if(arr[l]==K){
               return 1;
           }
           else{
               return -1;
           }
       }
       
       else{
           
           int m=(l+r)/2;
           
           if(arr[m]==K){
               return 1;
           }
           
           else if(arr[m]>K){
               
               return searchInSorted(arr, l, m-1, K) ;
               
           }
           
           else{
               
               return searchInSorted(arr, m+1, r, K) ;
           }
           
           
           
       }
       
    
       
}


int main()
{
    
    int N=5;
    int K = 2;
    int arr[]={1,3,4,5,6};
    
    cout<<searchInSorted(arr,0,N,K);

    return 0;
}
