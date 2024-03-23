import sys
N = int(sys.stdin.readline().rstrip())

arrs = []
for _ in range(N):
    a, b = map(int,sys.stdin.readline().split())
    arrs.append([a,b])

arrs.sort(key=lambda x:(x[1],x[0]))
end = 0
ans = 0
for arr in arrs:
	nextst = arr[0]
	nexten = arr[1]
	if end <=nextst:
		ans = ans + 1
		end = nexten
print(ans)