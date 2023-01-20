# 0x91Day of 0x365Days challenge
# VEDANT BHARAD
# 16-1-2023
import math
import os
import random
import re
import sys
def isBalanced(s):
    # Write your code here
    arr = []
    for i in s:
        if i == '(':
            arr.append(1);
        elif i == ')':
            if len(arr) > 0 and arr[-1] == 1:
                arr.pop()
            else:
                return "NO"
        elif i == '[':
            arr.append(2)
        elif i == ']':
            if len(arr) > 0 and arr[-1] == 2:
                arr.pop()
            else:
                return "NO"
        if i == '{':
            arr.append(3)
        elif i == '}':
            if len(arr) > 0 and arr[-1] == 3:
                arr.pop()
            else:
                return "NO"
    if len(arr) == 0:
        return "YES"
    else:
        return "NO"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    t = int(input().strip())
    for t_itr in range(t):
        s = input()
        result = isBalanced(s)
        fptr.write(result + '\n')
    fptr.close()