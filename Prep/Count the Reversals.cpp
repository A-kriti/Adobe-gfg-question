// ques - https://www.geeksforgeeks.org/minimum-number-of-bracket-reversals-needed-to-make-an-expression-balanced/

int countRev (string s)
{
    // your code here
    int n=s.length();
    
    if(n%2!=0){
        return -1;
    }
    
    
    int open=0,close=0;
    
    for(int i=0;i<n;i++){
        
        char x=s[i];
        
        if(x=='{'){
            open++;
        }
        
        else{
            
            if(open==0){
                close++;
            }
            
            else{
                open--;
            }
        }
    }
    
    int z=ceil(open/2.0)+ceil(close/2.0);
    
    return z;
}
