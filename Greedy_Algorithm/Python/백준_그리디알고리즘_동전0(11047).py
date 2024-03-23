N, K = map(int,input().split())
money = []
count = 0
for _ in range(N):
    Input = int(input())
    money.append(Input)
money.sort(reverse=True)
for i in range(N):
    if(K>=money[i]):
        count += int(K/money[i])
        K %= money[i]
    else: continue
print(count)

