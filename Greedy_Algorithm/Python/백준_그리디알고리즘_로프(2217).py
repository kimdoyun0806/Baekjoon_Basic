import sys
N = int(sys.stdin.readline())
arr = []
for _ in range(N):
    W = int(sys.stdin.readline())
    arr.append(W)
arr.sort(reverse=True)
max = arr[0]
for i in range(1,N):
    """temp = int(arr[i] * (i+1))
    if (temp >= max):
        max = temp"""
    ## �� ����� ���� �� ���� �ð� 124ms -> 112ms
    if (max < arr[i] * (i+1)):
        max = arr[i] * (i+1)
print(max)