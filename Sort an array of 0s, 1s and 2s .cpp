//ques link - https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        
        //int x[n];
        
        int c0=0;
        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                c0+=1;
            }
            else if(a[i]==1){
                c1+=1;
            }
            else if(a[i]==2){
                c2+=1;
            }
            
        }
        
         for(int i=0;i<c0;i++){
            a[i]=0;
         }
         
         for(int i=c0;i<c1+c0;i++){
             a[i]=1;
         }
         for(int i=c0+c1;i<c2+c1+c0;i++){
             a[i]=2;
         }
         
        
        
    //return a[];    
        
    }
    
};
