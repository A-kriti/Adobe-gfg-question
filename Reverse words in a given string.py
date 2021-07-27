#ques link - https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
        # code here 
        
        S=S.split(".")
        s=str(S[-1])
        t=len(S)-1
        for i in range(0,t):
            s+="."+S[t-1-i]
            
        return s;
        
