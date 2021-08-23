// ques - https://www.geeksforgeeks.org/minimum-number-deletions-insertions-transform-one-string-another/

class Solution{
  public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int x=str1.length();
	    int y=str2.length();
	    
	    int t[x+1][y+1];
	    for(int i=0;i<=x;i++){
	        for(int j=0;j<=y;j++){
	            
	            if(i==0|j==0){
	                t[i][j]=0;
	            }
	        
	    }
	    }
	    
	    	 
	    for(int i=1;i<=x;i++){
	        for(int j=1;j<=y;j++){
	            
	            if(str1[i-1]==str2[j-1]){
	                t[i][j]=1+t[i-1][j-1];
	            }
	            
	            else{
	                t[i][j]=max(t[i][j-1],t[i-1][j]);
	            }
	        
	    }
	    }
	    
	    
	    
	    int z=x+y-2*t[x][y];
	    return z;
	    
	} 
};


/* ex->>

a="heap" of size x=4
b="pea"  of size y=3

step 1-> common lcs -> ea
step 2-> output=(x-lcs)+(y-lcs) =(x+y-2*lcs)*/
