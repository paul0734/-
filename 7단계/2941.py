x = input()
cro = ['c=','c-','dz=','d-','lj','nj','s=','z=']

for i in cro:
    x = x.replace(i,"a")

print(len(x))

#replace(a,b)는 문자열 a를 문자열 b로 바꿔준다
