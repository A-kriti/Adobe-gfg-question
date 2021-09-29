

#include <bits/stdc++.h>

using namespace std;


static bool comp(pair<int,int> a,pair<int,int> b){
        
        if(a.second==b.second)
            return a.first<b.first;
        return a.second<b.second;
}
    
    
long ClosestSquareDistance(vector<int> x,vector<int> y){
    
    int n=x.size();
    vector<pair<int,int>> v(n);
        
        for(int i=0;i<n;i++){
            v[i]= {x[i],y[i]};
        }
        
    sort(v.begin(),v.end(),comp);
    
    long min=INT_MAX;
    
    for(int i=0;i<n-1;i++){
        
        long x1=v[i].first-v[i+1].first;
        long y1=v[i].second-v[i+1].second;
        
        long z=pow(x1,2)+pow(y1,2);
        if(z<min){
            min=z;
        }
    }
     return min;
    
}


int main()
{
    
    //vector<int> x={0,1,2};
    //vector<int> y={0,1,4};
    vector<int> x={0,10,15};
    vector<int> y={0,10,20};
    
    cout << "The smallest distance is " << ClosestSquareDistance(x,y);
    return 0;
}
