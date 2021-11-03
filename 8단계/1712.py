a,b,c = map(int, input().split())

if b>=c:
    print(-1)
else:
    print(a//(c-b)+1) #c-b는 한개당 얻는 수익 -> 총 비용(a)를 나누면 본전이 구해지고, +1 부터 이윤발생
