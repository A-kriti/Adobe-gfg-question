//ques link - https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        char t='.';
    
    int n=S.size();
    string l[n];
    string temp="";
    for(int i=0;i<(int)S.size();i++){
        
        if(S[i]!=t){
        
        temp+=S[i];
        }
        
        else{
            //cout<<temp<<" ";
            l[i]=temp+".";
            temp="";
        }
    }
    
    //cout<<temp<<endl;
    l[n-1]=temp+".";
    
    string x="";
    
    for(int i=0;i<n;i++){
        x+=l[n-1-i];
        //cout<<l[i]<<" ";
        
    }
    
    //cout<<x;
    
    string y="";
    for(int i=0;i<(int)x.size()-1;i++){
        y+=x[i];
    }
    
    
    return y;
    } 
};
