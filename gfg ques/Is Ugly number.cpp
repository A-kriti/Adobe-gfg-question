// ques - https://leetcode.com/problems/ugly-number/submissions/

class Solution {
public:
    
    
    bool isUgly(int n) {
        
        
       int a[3]={2,3,5};
        
        if(!n){
            return false;
        }
    
        for(int i=0;i<3;i++){
            while(n%a[i]==0){
                n=n/a[i];
            }
        }
        
        return n==1;
    }
};
