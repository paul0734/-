n=[]
for _ in range(10):
    n.append(int(input())%42) 

n=set(n) #set()은 중복제거
print(len(n))
