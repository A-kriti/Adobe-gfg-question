// ques - https://practice.geeksforgeeks.org/problems/repetitive-addition-of-digits2221/1#

class Solution
{
public:
    int singleDigit(long long N)
    {
        // Write Your Code here
        
        
        if(N==0)
            return 0;
        
        if(N%9==0)
            return 9;
        
        else
            return N%9;
    }
};
