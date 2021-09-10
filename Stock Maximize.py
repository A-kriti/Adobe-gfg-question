# ques - https://www.hackerrank.com/challenges/stockmax/problem

def stockmax(prices):
    # Write your code here
    
      
    ind_max = prices.index(max(prices))
    inv = sum(prices[:ind_max])
    pf = len(prices[:ind_max])*prices[ind_max] - inv
    if len(prices[ind_max+1:]) > 0:
        pf += stockmax(prices[ind_max+1:])
    return p
