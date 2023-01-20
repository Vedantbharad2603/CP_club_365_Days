def areIsomorphic(str1,str2):
    dict ={}
    if len(str1)!=len(str2):
        return False
    for i in range(len(str1)):
        if str1[i] in dict.keys():
            if dict.get(str1[i])!=str2[i]:
                return False
        else:
            if str2[i] in dict.values():
                return False
            dict[str1[i]] = str2[i]
    return True
t = int(input())
for i in range(t):
    s=str(input())
    p=str(input())
    if(areIsomorphic(s,p)):
        print(1)
    else:
        print(0)
#User function Template for python3

class Solution:
    
    #Function to check if two strings are isomorphic.
    def areIsomorphic(self,str1,str2):
        dict ={}
        if len(str1)!=len(str2):
            return False
        for i in range(len(str1)):
            if str1[i] in dict.keys():
                if dict.get(str1[i])!=str2[i]:
                    return False
            else:
                if str2[i] in dict.values():
                    return False
                dict[str1[i]] = str2[i]
        return True

# # 0x60Day of 0x365Days challenge
# # VEDANT BHARAD
# # 16-12-2022
# #{ 
# # Driver Code Starts
# #Initial Template for Python 3

# import atexit
# import io
# import sys
# from collections import defaultdict

# _INPUT_LINES = sys.stdin.read().splitlines()
# input = iter(_INPUT_LINES).__next__
# _OUTPUT_BUFFER = io.StringIO()
# sys.stdout = _OUTPUT_BUFFER

# @atexit.register

# def write():
#     sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

# if __name__=='__main__':
#     t = int(input())
#     for i in range(t):
#         s=str(input())
#         p=str(input())
#         ob = Solution()
#         if(ob.areIsomorphic(s,p)):
#             print(1)
#         else:
#             print(0)
# # } Driver Code Ends