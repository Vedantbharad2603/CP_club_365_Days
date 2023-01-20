# 0x93Day of 0x365Days challenge
# VEDANT BHARAD
# 18-1-2023
def transitionPoint(arr, n):
    if 1 in arr:
        return arr.index(1)
    return -1

#{ 
 # Driver Code Starts
#driver code
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(transitionPoint(arr, n))

# } Driver Code Ends