// ques - https://www.geeksforgeeks.org/generate-0-1-25-75-probability/


#include<bits/stdc++.h>

using namespace std;



int rand50()
{
    
    return rand() & 1;
}


bool rand75()
{
    
    
    return rand50() | rand50();
}

int main(){
    //srand(time(NULL));
    int n=50;
    int c0=0;
    int c1=0;
    for(int i=0;i<50;i++){
    
        cout<<rand75()<<" ";
        if(rand75()==0){
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
