import sys
INT_MAX = sys.maxsize #가독성을 위해

n=int(input())
arr=list(map(int, input().split()))
ans=INT_MAX
for i in range(n):
    sum_val=0
    for j in range(n):
        sum_val+=arr[j]*abs(i-j)

    ans=min(ans,sum_val)

print(ans)