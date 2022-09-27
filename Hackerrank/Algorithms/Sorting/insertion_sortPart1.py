#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the insertionSort1 function below.
def insertionSort1(n, arr):
    i,x=n-2,arr[n-1]
    while i>=0 and arr[i]>x:
        arr[i+1]=arr[i]
        i-=1
        print(*arr)
    arr[i+1]=x
    print(*arr)

if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    insertionSort1(n, arr)
