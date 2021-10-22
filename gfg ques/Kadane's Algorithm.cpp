// ques - https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#

class Soltion{

public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        
        long long curr=0;
        long long max_sum=0;
        
        int c=0;
         
        int max_element=arr[0];
        for(int i=0;i<n;i++){
            
            if(arr[i]<0){
                c++;
            }
            max_element=max(max_element,arr[i]);
            
        }
        
        
        long long z=max_element;
        if(c==n)return z;
        
        for(int i=0;i<n;i++){
            
            
            curr+=arr[i];
            max_sum=max(curr,max_sum);
            
            
            if(curr<0){
                curr=0;
            }
        }
        
        
        
        
        return max_sum;
    }
};
