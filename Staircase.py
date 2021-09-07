#ques - https://www.hackerrank.com/contests/hackerrank-internship-challenges/challenges/staircase
  
  
def staircase(n):
    # Write your code here
    
    q=n-1
    w=1
    while(q>=0 & w<=n):
        print(q*" "+w*"#")
        #print(q*"#")
        q-=1
        w+=1
