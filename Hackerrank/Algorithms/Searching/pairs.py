#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the pairs function below.
def pairs(n,k, arr):
    pts=sorted(arr)
    ans=0
    i,j=0,1
    while j<n:
        if pts[j]-pts[i]==k:
            ans+=1
            j+=1
        elif pts[j]-pts[i]>k:
            i+=1
        elif pts[j]-pts[i]<k:
            j+=1
    return ans


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    arr = list(map(int, input().rstrip().split()))

    result = pairs(n,k, arr)

    fptr.write(str(result) + '\n')

    fptr.close()
