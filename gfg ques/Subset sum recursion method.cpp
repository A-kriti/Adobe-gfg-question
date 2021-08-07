// ques - https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/?category[]=Dynamic%20Programming&category[]=Dynamic%20Programming&page=4&query=category[]Dynamic%20Programmingpage4category[]Dynamic%20Programming#

class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        if(N==0){
            return false;
        }
        if(sum==0){
            return true;
        }
        
        if(arr[N-1]<=sum){
            
            return isSubsetSum(N-1,arr,sum-arr[N-1]) || isSubsetSum(N-1,arr,sum);
        }
        
        else{
            return isSubsetSum(N-1,arr,sum);
        }
        
    }
};


//O(2^n)
