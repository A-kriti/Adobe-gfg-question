// ques - https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1#

class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> a;
        
        int r1=0,c1=0;
        
        while(r1<r && c1<c){
            
           for(int i=c1;i<c;++i){
               a.push_back(matrix[r1][i]);
           }
            r1++;
            
            for(int i=r1;i<r;++i){
               a.push_back(matrix[i][c-1]);
           }
            c--;
            
            
            if(r1<r){
                
                for(int i=c-1;i>=c1;--i){
                   a.push_back(matrix[r-1][i]);
               }
                r--;
            }
            
            if(c1<c){
                
                for(int i=r-1;i>=r1;--i){
                   a.push_back(matrix[i][c1]);
               }
                c1++;
            }
            
            
            
        }
        
        return a;
    }
};

