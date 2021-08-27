
#include <bits/stdc++.h>


using namespace std;

int isPrime(int N){
        // code here
        int y=0;
        int x=sqrt(N);
        if(N<=1){
            return 0;
        }
        for(int i=2;i<=x;i++){
            if(N%i==0){
                return 0;
                break;
            }
            
        }
        
       
        return 1;   
    }


bool is_belzabar_number(int x){
    
    int c=0;
    for(int i=2;i<=x;i++){
        if(isPrime(i)){
            if(i*(i+19)==x || i*(i-19)==x){
                c++;
                break;
            }
        }
    }
    
    if(c>0){
        return true;
    }
    return false;
}


int count_belzabar_number(int x){
    
    int count=0;
    for(int i=2;i<=x;i++){
        if(is_belzabar_number(i)){
            
            if(isPrime(i)){
                count++;
            }
            
        }
    }
    
    return count;
    
}


int count_prime_belzabar_number(int x){
    
    int count=0;
    for(int i=2;i<=x;i++){
        if(is_belzabar_number(i) && isPrime(i)){
            
           
                count++;
            
            
        }
    }
    
    return count;
}



int main()
{
    int n=120;
    cout<<is_belzabar_number(n)<<endl;
    cout<<count_belzabar_number(n)<<endl;
    cout<<count_prime_belzabar_number(n)<<endl;
    
    return 0;
}

