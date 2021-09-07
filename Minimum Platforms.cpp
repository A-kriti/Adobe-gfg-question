// ques - https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

class Solution{
public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	
    	int platform=1, ans=1;
    	
    	int i=1;
    	int j=0;
    	while(i<n && j<n){
    	    
    	    if(arr[i]<=dep[j]){
    	        
    	        platform++;
    	        i++;
    	    }
    	    
    	    else if(arr[i]>dep[j]){
    	        
    	        platform--;
    	        j++;
    	    }
    	    
    	    
    	    
    	    if(platform>ans){
    	        ans=platform;
    	    }
    	}
    	
    	return ans;
    }
};
