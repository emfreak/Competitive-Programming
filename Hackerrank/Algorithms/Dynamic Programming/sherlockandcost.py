#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the cost function below.
def cost(B):
    dp=[[0],[0]]
    for i in range(1,len(B)):
        add1=max(dp[0][-1],dp[1][-1]+B[i-1]-1)
        addMax=max(dp[0][-1]+B[i]-1,dp[1][-1]+abs(B[i]-B[i-1]))
        dp[0].append(add1)
        dp[1].append(addMax)
    return (max(dp[0][-1],dp[1][-1]))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        B = list(map(int, input().rstrip().split()))

        result = cost(B)

        fptr.write(str(result) + '\n')

    fptr.close()
