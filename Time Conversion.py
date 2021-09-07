# ques - https://www.hackerrank.com/contests/hackerrank-internship-challenges/challenges/time-conversion

def timeConversion(s):
    # Write your code here
    
    if(s[-2:]=="AM" and s[:2]=="12"):
        return "00"+s[2:-2]
    elif(s[-2:]=="AM"):
        return s[:-2]
    elif(s[-2:]=="PM" and s[:2]=="12"):
        return s[:-2]
    else:
        q=int(s[:2])+12
        return str(q)+s[2:-2]
