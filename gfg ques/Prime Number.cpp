// ques - https://practice.geeksforgeeks.org/problems/prime-number2314/1#

class Solution{
  public:
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
};

