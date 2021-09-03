// ques - https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> m;
        int c=0;
        
        for(int i=0;i<n;i++){
            
            int x=k-arr[i];
            
            if(m[x]==0){
                m[arr[i]]++;
            }
            
            else{
                c+=m[x];
                m[arr[i]]++;
            }
        }
        
        return c;
        
    }
};
