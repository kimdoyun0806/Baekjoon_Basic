# baekjoon 11399 ATM
# ATM 1��
# ����� 1�� ���� N�� ���� ��ȣ�� �Ű����ִ�.
# i�� ����� ���� �����ϴµ� �ɸ��� �ð��� Pi���̴�.
# �۾� ������ ������� �����Ѵ�.
# �׸��� �������� ����Ѵ�.
# ���� �����ϴµ� �ʿ��� �ð��� ���� '�ּ�'�� �����.
people = int(input())
minute = list(map(int,input().split()))
minute.sort()
sum=0
result=0
for i in range(people):
    sum += minute[i]
    result += sum
print(result)
