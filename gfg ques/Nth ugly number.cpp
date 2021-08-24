// ques - https://www.geeksforgeeks.org/ugly-numbers/

class Solution{
public:	
	// #define ull unsigned long long
	
	/* Function to get the nth ugly number*/
	
	bool isugly(int x){
	    
	    if(!x){
	        return false;
	    }
	    
	    int a[3]={2,3,5};
	    for(int i=0;i<3;i++){
	        while(x%a[i]==0){
	            x=x/a[i];
	        }
	    }
	    
	    return x==1;
	    
	}
	ull getNthUglyNo(int n) {
	    // code here
	    int i=1;
	    
	    int count=1;
	    
	    while(count<n){
	        i++;
	        if(isugly(i)){
	            count++;
	        }
	    }
	    
	    return i;
	}
};

// not very efficient
