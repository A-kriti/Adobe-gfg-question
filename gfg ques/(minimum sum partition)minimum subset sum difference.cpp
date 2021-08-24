// ques - https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1

class Solution{
  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	    }
	    
	    int t[n+1][sum+1];
	    
	    for(int i=0;i<=n;i++){
	        for(int j=0;j<=sum;j++){
	            if(i==0){
	                t[i][j]=0;
	            }
	            if(j==0){
	                t[i][j]=1;
	            }
	            
	        }
	    }
	    
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=sum;j++){
	            if(arr[i-1]<=j){
	                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
	            }
	            else{
	                t[i][j]=t[i-1][j];
	            }
	            
	        }
	    }
	    
	    
	    
	    vector<int> l;
	    for(int i=0;i<=sum/2;i++){
	        
	        if(t[n][i]==1){
	            int x=sum-2*i;
	            l.push_back(x);
	        }
	    }
	    
	    
	    int min_val= *min_element(l.begin(),l.end());
	    
	  return min_val;  
	} 
};

//Time Complexity: O(n*|sum of array elements|)
//Auxiliary Space: O(n*|sum of array elements|)
