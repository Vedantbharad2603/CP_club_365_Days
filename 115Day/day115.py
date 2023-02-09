# 0x115Day of 0x365Days challenge
# VEDANT BHARAD
# 9-2-2023
import math
import os
import random
import re
import sys
def birthday(s, d, m):
    # Write your code here
    temp1=0
    temp2=m
    con=0
    while temp2<=len(s):
        if sum(s[temp1:temp2])==d:
            con+=1
        temp1+=1
        temp2+=1
    return con
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    n = int(input().strip())
    s = list(map(int, input().rstrip().split()))
    first_multiple_input = input().rstrip().split()
    d = int(first_multiple_input[0])
    m = int(first_multiple_input[1])
    result = birthday(s, d, m)
    fptr.write(str(result) + '\n')
    fptr.close()
