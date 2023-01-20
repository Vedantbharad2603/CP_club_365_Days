# 0x77Day of 0x365Days challenge
# VEDANT BHARAD
# 2-1-2023
t=int(input())
while t>0:
    A,B,C=map(int,input().split())
    v=[A,B,C]
    v.sort()
    if v[2]-(v[1] +v[0])==0:
        print("YES")
    else:
        print("NO")
    t-=1