# 0x100Day of 0x365Days challenge
# VEDANT BHARAD
# 25-1-2023
t=int(input())
for loop1 in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    arr2={}
    for loop1 in arr:
        if loop1 in arr2:
            arr2[loop1]+=1
        else:
            arr2[loop1]=1
    print(n-max(arr2.values()))