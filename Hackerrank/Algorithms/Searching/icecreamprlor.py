#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the icecreamParlor function below.
def icecreamParlor(m, arr):
    hf_price=sorted([i+1 for i,x in enumerate(arr) if x*2==m])
    if len(hf_price)>=2:
        return(hf_price[0],hf_price[1])
    else:
        s=set(arr)
        for x in s:
            if m-x in s:
                return(sorted((arr.index(x)+1,arr.index(m-x)+1)))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        m = int(input())

        n = int(input())

        arr = list(map(int, input().rstrip().split()))

        result=icecreamParlor(m, arr)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()
