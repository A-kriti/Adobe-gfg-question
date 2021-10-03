// ques - https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1#

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
                                                 
                                                 
          
        queue<long long> q;
        vector<long long> v; 
        
        long long int i=0;
        long long int j=0;
        
        while(j<N){
            
            if(A[j]<0){
                q.push(A[j]);
            }
            
            if(j-i+1<K){
                j++;
                continue;
            }
            
            else if(j-i+1==K){
                
                if(q.empty())
                    v.push_back(0);
                
                else
                    v.push_back(q.front());
                    
                if(A[i]<0)
                    q.pop();
                    i++;
                
                
            }
            j++;
        }
        
        return v;
                                                
                                                 
 }
