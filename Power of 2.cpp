// ques - https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1#



class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        if(n==1){
            return true;
        }
        // Your code here 
        
        while (n>=1 && n%2==0){
            
           
            
            n=n/2;
            if(n==1){
              return true;
            }
        
        }
       
        return false;
    }
};
