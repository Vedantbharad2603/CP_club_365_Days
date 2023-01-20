# 0x75Day of 0x365Days challenge
# VEDANT BHARAD
# 31-12-2022
# cook your dish here
t=int(input())
while t>0:
    H,X,Y=map(int,input().split())
    if Y>=X:
        print(0)
    else:
        print(1)
    t-=1