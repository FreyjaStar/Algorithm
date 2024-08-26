# 3.py
def sum(n:int)->int:
    if n==1:
        return 1
    else:
        return n+sum(n-1)
    
n=int(input("Enter n\n"))
print(sum(n))