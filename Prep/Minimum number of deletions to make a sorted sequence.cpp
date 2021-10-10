// ques - https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-to-make-a-sorted-sequence3248/1

class Solution{

	public:
	int minDeletions(int arr[], int n) 
	{ 
	    // Your code goes here
	    
	    int t[n];
	    
	    for(int i=0;i<n;i++){
	        t[i]=1;
	    }
	    
	    
	    for(int i=1;i<n;i++){
	        
	        for(int j=0;j<i;j++){
	            if(arr[i]>arr[j]){
	                
	                t[i]=max(t[i],t[j]+1);
	            }
	        }
	    }
	    
	    int x=INT_MIN;
	    for(int i=0;i<n;i++){
	        
	        if(t[i]>x){
	            
	        x=t[i];
	        }
	        //x=max(x,t[i]);
	    }
	    
	    
	    return n-x;
	    
	} 
};
