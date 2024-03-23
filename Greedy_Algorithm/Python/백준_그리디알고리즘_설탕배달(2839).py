N = int(input())
count = 0
while N>0:
    if N%5==0:
        count += int(N/5)
        break;
    else:
        N = N-3
        if(N<0):
            count = -1
            break
        else:
            count+=1
print(count)