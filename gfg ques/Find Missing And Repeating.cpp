// ques - https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1#


class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        
        int a,b;
        
        unordered_map<int,int>m;
        
        for(int i=1;i<=n;i++){
            m[i]++;
        }
        
        for(int i=0;i<n;i++){
            
            if(m.find(arr[i])!=m.end()){
                if(m[arr[i]]>1){
                    a=arr[i];
                    
                }
                
                m[arr[i]]++;
            }
            
        }
        
        for(auto x:m){
            if(x.second==1){
                b=x.first;
            }
        }
        
        int *t=new int[2];
        t[0]=a;
        t[1]=b;
        return t;
    }
};
