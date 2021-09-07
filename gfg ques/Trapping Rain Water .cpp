// ques - https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

class Solution{
  // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        
        long long  from_left[n];
        long long from_right[n];
        
        long long water=0;
        
        from_left[0]=arr[0];
        
        for(int i=1;i<n;i++){
            from_left[i]=max(from_left[i-1],arr[i]);
        }
        
        from_right[n-1]=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            from_right[i]=max(from_right[i+1],arr[i]);
        }
        
        for(int i=0;i<n;i++){
            water+=(min(from_left[i],from_right[i])-arr[i]);
        }
        
        return water;
    }
  
};
