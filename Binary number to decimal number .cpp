//Ques link - https://practice.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1


class Solution
{
	public:
		int binary_to_decimal(string str)
		{
		    // Code here.
		    // Code here.
		    
		    int n=str.size();
		    int c=0;
		    
		    for(int i=0;i<n;i++){
		        
		        if(str[n-1-i]=='1'){
		            
    		        c+=pow(2,i);
    		        //cout<<c<<endl;
		        }
		        
		        
		    }
		    
		    return c;
		}
};
