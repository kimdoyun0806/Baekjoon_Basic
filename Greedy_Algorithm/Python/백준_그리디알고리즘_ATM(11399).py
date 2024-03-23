# baekjoon 11399 ATM
# ATM 1대
# 사람은 1번 부터 N번 까지 번호가 매겨져있다.
# i번 사람이 돈을 인출하는데 걸리는 시간은 Pi분이다.
# 작업 순서가 작은대로 정렬한다.
# 그리고 누적합을 계산한다.
# 돈을 인출하는데 필요한 시간의 합을 '최소'로 만든다.
people = int(input())
minute = list(map(int,input().split()))
minute.sort()
sum=0
result=0
for i in range(people):
    sum += minute[i]
    result += sum
print(result)
