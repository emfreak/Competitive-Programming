# Compare the triplets
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the compareTriplets function below.
def compareTriplets(a, b):
    result=[0,0]
    for i in range(len(a)):
        for j in range(len(b)):
            if i==j:
                if a[i]>b[i]:
                    result[0]+=1
                elif a[i]<b[i]:
                    result[1]+=1
                else :
                    result[0]=result[0]
                    result[1]=result[1]
    return result



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()