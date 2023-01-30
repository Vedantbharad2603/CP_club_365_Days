import math

from sys import stdin
#User function template for Python 3

class Solution:
    def majorityElement(self, A, N):
        #Your code here
        count=1
        res=0
        for i in range(1,N):
            if A[res]== A[i]:
                count+=1
            else:
                count-=1
            if count==0:
                count=1
                res=i
        count=0
        for i in range(0,N):
            if A[res]== A[i]:
                count+=1
        if count>(N/2):
            return A[res]
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3




def main():
        T=int(input())
        while(T>0):
            
            N=int(input())

            A=[int(x) for x in input().strip().split()]
            
            
            obj = Solution()
            print(obj.majorityElement(A,N))
            
            T-=1


if __name__ == "__main__":
    main()
# } Driver Code Ends