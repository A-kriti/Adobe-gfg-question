// minimum deletions count required in a sequence to make it a good sequence 



#include <bits/stdc++.h>

using namespace std;

int min_deletion(vector<int>v,int x){
    
    int n=v.size();
    
    unordered_map<int,int>m;
    
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    
    int t=m.size();
    int c=0;
    
    
    
    for (auto i : m){
        if(i.second%x!=0){
             c=c+i.second%x;
         }
    }
    
    return c;
}

int main()
{
    vector<int>v1={1,1,2,2,2,2,4,4};
    //vector<int>v2={1,1,3,3,3,4,6};
    int x=4;
    cout<<min_deletion(v1,x)<<" ";
    //cout<<min_deletion(v2)<<" ";

    return 0;
}
