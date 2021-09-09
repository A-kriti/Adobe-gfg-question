// ques - https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion1638/1#


class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    // code here
	    
	    for(int i=0;i<n-1;i++){
	       
	        if(i%2==0){
	            
	            if(arr[i]>arr[i+1]){
	                int x=arr[i];
	                arr[i]=arr[i+1];
	                arr[i+1]=x;
	            }
	        
	        }
	        
	        else if(i%2!=0){
	        
	            
	            if(arr[i]<arr[i+1]){
	                int x=arr[i];
	                arr[i]=arr[i+1];
	                arr[i+1]=x;
	            }
	        
	        }
	        
	        
	        
	    }
	}
};
