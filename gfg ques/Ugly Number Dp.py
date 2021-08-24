# ques - https://www.geeksforgeeks.org/ugly-numbers/

class Solution:
	def getNthUglyNo(self,n):
		# code here
		r=[1]
		i2=0
		i3=0
		i5=0
		
		for i in range(n-1):
		    
		    next2=r[i2]*2
		    next3=r[i3]*3
		    next5=r[i5]*5
		    nextt=min(next2,next3,next5)
		    r.append(nextt)
		    
    		if nextt == next2:
    		   i2+=1
    		    
    		if nextt==next3:
    		   i3+=1
    		   
    		if nextt==next5:
    		   i5+=1
		    
        return r[-1]
