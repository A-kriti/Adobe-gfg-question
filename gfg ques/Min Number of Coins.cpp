// ques - https://www.geeksforgeeks.org/find-minimum-number-of-coins-that-make-a-change/

public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    int t[M+1][V+1];
	    
	    for(int i=0;i<=M;i++){
	        for(int j=0;j<=V;j++){
	        
	        if(i==0){
	            t[i][j]=INT_MAX-1;
	        }
	        if(j==0){
	            t[i][j]=0;
	        }
	        
	    }
	    }
	    
	    for(int i=1;i<=M;i++){
	    for(int j=1;j<=V;j++){
	        if(j%coins[0]==0){
	            t[i][j]=j/coins[0];
	        }
	        else{
	            t[i][j]=INT_MAX-1;
	        }
	    }
	    }
	    
	    
	    
	    for(int i=2;i<=M;i++){
	        for(int j=1;j<=V;j++){
	        
	        if(coins[i-1]<=j){
	            t[i][j]=min(t[i][j-coins[i-1]]+1,t[i-1][j]);
	        }
	        else{
	            t[i][j]=t[i-1][j];
	        }
	        
	    }
	    }
	    
	    if(t[M][V]==INT_MAX-1){
	        return -1;
	    }
	    
	    
	    
	    
	   return t[M][V];
	    
	    
	    
	} 
	  
};
