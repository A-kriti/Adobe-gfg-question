// ques - https://codeforces.com/contest/1560/problem/A


#include <bits/stdc++.h>
using namespace std;

int dislike3(int x){
    
    vector<int> l={1};
    
    for(int i=1;i<=3*x;i++){
       
            
        if(i%3!=0 && i%10!=3){
            l.push_back(i);
            
        }
        
        
    }
    
    return l[x];
   
}


int main()
{
    int n;
    cin>>n;
    int y;
    for(int i=0;i<n;i++){
        cin>>y;
        cout<<dislike3(y)<<endl;
    }
    
    
    
    
    return 0;
}

