# ques - https://www.hackerrank.com/challenges/stockmax/problem

def stockmax(prices):
    # Write your code here
    
    max_index=prices.index(max(prices))
    x=sum(prices[:max_index])
    y=len(prices[:max_index])*prices[max_index]-x
    if len(prices[max_index+1:])>0:
        y+=stockmax(prices[max_index+1:])
    return y
