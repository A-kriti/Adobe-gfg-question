// ques - https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1#

class Solution{

public:
        //Function to merge the arrays.
  
          // Method 1(Gap Method) will do *_*
        
          // Method 2
        
        
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=0;
            int j=0;
    
    
            while(i<n){
                
                if(arr1[i]>arr2[j]){
                    swap(arr1[i],arr2[j]);
                    i++;
                    
                    int t=j;
                    while(t<m-1){
                        if(arr2[t]>arr2[t+1]){
                            swap(arr2[t],arr2[t+1]);
                            t++;
                        }
                        else{
                            break;
                        }
                    }
                }
                    
            }
            
            
        
        // Method 3
        /*long long *sort(long long arr2[],int m){
            
            priority_queue<int,vector<int>,greater<int>>p;
            
            for(int i=0;i<m;i++){
                p.push(arr2[i]);
            }
            
            for(int i=0;i<m;i++){
                arr2[i]=p.top();
                p.pop();
            }
            
            return arr2;
        }*/
        
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            int i=0;
            int j=0;
    
    
            while(i<n){
                
                if(arr1[i]>arr2[j]){
                    swap(arr1[i],arr2[j]);
                    i++;
                    sort(arr2,m);
                   
                }
                    
            }
            
            
            
        } 
};
