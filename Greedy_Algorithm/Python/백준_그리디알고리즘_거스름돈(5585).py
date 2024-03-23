# -*- coding: utf-8 -*-
import sys
N = int(sys.stdin.readline())
money = 1000-N
arr = [500,100,50,10,5,1]
count = 0
for i in range(6):
    if money>=arr[i]:
        count += money//arr[i]
        money %= arr[i]
    else:
        continue
print(count)

## / 는 float 형태 , // 는 int 형태

"""
for arr in arrs:
    if money == 0:
        break
    if money // arr > 0:
        count += money // arr
        money %= arr
"""