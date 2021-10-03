// ques - https://www.geeksforgeeks.org/find-maximum-minimum-sum-subarray-size-k/

class Solution{

public:
    int maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        
        int i=0;
        int j=0;
        
        int sum=0;
        
        int max_sum=0;
        
        while(j<N){
            
            sum+=Arr[j];
            
            if(j-i+1<K){
                j++;
            }
            
            else if(j-i+1==K){
                max_sum=max(max_sum,sum);
                
                sum-=Arr[i];
                i++;
                j++;
            }
            
        }
        
        return max_sum;
    }
};
