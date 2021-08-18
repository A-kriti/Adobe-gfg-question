// ques- https://www.geeksforgeeks.org/generate-0-1-25-75-probability/

// generate 0 and 1 with 25% and 75% probability


#include <bits/stdc++.h>
using namespace std;
 
int rand25()
{
    
    return rand()%2 | rand()%2;
}



int main()
{
    
    int n=50000;
    int c0=0;
    int c1=0;
    for(int i=0;i<n;i++){
    
        //cout<<rand75()<<" ";
        if(rand25()==0){
            c0++;
        }
        else{
            c1++;
        }
        
    }
    cout<<"\n";
    cout<<"c0 is "<<((c0*100)/n)<<endl;
    cout<<"c1 is "<<((c1*100)/n);
    return 0;
}
