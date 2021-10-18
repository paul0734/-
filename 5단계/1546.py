a = int(input())

arr=list(map(int, input().split()))

max = max(arr)
num=[]

for i in range(a):
    num.append(arr[i]/max*100)

print(sum(num)/a)
