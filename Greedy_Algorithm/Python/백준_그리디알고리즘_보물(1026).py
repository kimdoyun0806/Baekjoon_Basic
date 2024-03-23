import sys
N = int(sys.stdin.readline())
A = list(map(int,sys.stdin.readline().split()))
B = list(map(int,sys.stdin.readline().split()))
sum = 0
A.sort()
for i in range(N):
    
    sum += A[i] * max(B)
    B.pop(B.index(max(B)))
print(sum)