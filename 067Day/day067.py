# 0x67Day of 0x365Days challenge
# VEDANT BHARAD
# 23-12-2022
from typing import List
class Solution:
    def maxCoins(self, N : int, arr : List[int]) -> int:
        # code here
        tempArr = [[0 for loop in range(N + 2)] for loop in range(N + 2)]
        arr.append(1)
        arr.insert(0,1)
        ans=0
        for loop in range(N, 0, -1):
            for loop2 in range(loop, N + 1):
                ans = 0
                for loop3 in range(loop, loop2 + 1):
                    tempsum = arr[loop - 1] * arr[loop3] *arr[loop2 + 1] + tempArr[loop][loop3 - 1] + tempArr[loop3 + 1][loop2]
                    ans = max(ans, tempsum)
                tempArr[loop][loop2] = ans
        return ans

#{ 
 # Driver Code Starts

class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=[int(loop) for loop in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for loop in arr:
            print(loop,end=" ")
        print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        N = int(input())
        
        
        arr=IntArray().Input(N)
        
        obj = Solution()
        res = obj.maxCoins(N, arr)
        
        print(res)
        

# } Driver Code Ends