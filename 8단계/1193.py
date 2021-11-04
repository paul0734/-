n = int(input())

line=1
while n>line:
    n=n-line
    line=line+1

if line%2==0:
    a=n
    b=line-n+1
else:
    a=line-n+1
    b=n
print(a, '/', b, sep='')

#https://www.acmicpc.net/problem/1193
