#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hourglassSum function below.
def hourglassSum(arr):
    smax=-9*7
    for r in range(len(arr)-2):
        for c in range(len(arr)-2):
            t1=arr[r][c]
            tc=arr[r][c+1]
            tr=arr[r][c+2]
            mc=arr[r+1][c+1]
            b1=arr[r+2][c]
            bc=arr[r+2][c+1]
            br=arr[r+2][c+2]
            s=t1+tc+tr+mc+b1+bc+br
            smax=max(smax,s)
    return smax

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
