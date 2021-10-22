// ques->https://www.geeksforgeeks.org/sum-of-all-the-prime-divisors-of-a-number/


#include <bits/stdc++.h>

using namespace std;

bool isprime(int x){
    
    if(x==0 || x==1)return false;
    if(x==2 || x==3)return true;
    
    int y=sqrt(x);
    
    for(int i=2;i<=y;i++){
        if(x%i==0){
            return false;
        }
    }
    
    return true;
}


int sumofprimefactor(int z){
    
    int sum=0;
    
    for(int i=1;i<z;i++){
        if(z%i==0){
            if(isprime(i)==1){
                sum+=i;
                
                
            }
            
        }
    }
    
    return sum;
}


int main()
{
    
    int x=6;
    cout<<sumofprimefactor(x);

    return 0;
}
