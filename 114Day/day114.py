
# 0x114Day of 0x365Days challenge
# VEDANT BHARAD
# 8-2-2023
class Solution:
    def heapify(self,arr, n, i):
        temp = i
        l = 2*i +1
        r = 2*i+ 2
        if l < n and arr[i] < arr[l]:
            temp = l

        if r < n and arr[temp] < arr[r]:
            temp = r

        if temp != i:
            arr[i], arr[temp] = arr[temp],arr[i]
            self.heapify(arr,n,temp)

    def buildHeap(self,arr,n):
        for i in range(n,-1,-1):
            self.heapify(arr,n,i)

    def HeapSort(self, arr, n):
        self.buildHeap(arr,n)
        for i in range(n-1,0,-1):
            arr[i],arr[0] = arr[0], arr [i]
            self.heapify(arr,i,0)
#{ 
# Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys
# Contributed by : Mohit Kumara
_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        Solution().HeapSort(arr,n)
        print(*arr)

# } Driver Code Ends