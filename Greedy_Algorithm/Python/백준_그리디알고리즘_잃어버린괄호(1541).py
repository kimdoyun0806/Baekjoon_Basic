import sys
N = sys.stdin.readline().split('-')
res = 0

for i in N[0].split('+'):
    res += int(i)
for i in N[1:]:
    for j in i.split('+'):
        res -= int(j)
print(res)