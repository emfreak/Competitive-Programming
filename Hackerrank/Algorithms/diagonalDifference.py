#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'diagonalDifference' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY arr as parameter.
#

def diagonalDifference(arr):
    # Write your code here
    r1=0
    r2=0
    for i in range(len(arr)):
        for j in range(len(arr)):
            if i==j:
                r1+=arr[i][j]
    for i in range(len(arr)):
        for j in range(len(arr[0])):
            if i+j==len(arr)-1:
                r2+=arr[i][j]
    return (abs(r1-r2))          


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = []

    for _ in range(n):
        arr.append(list(map(int, input().rstrip().split())))

    result = diagonalDifference(arr)

    fptr.write(str(result) + '\n')