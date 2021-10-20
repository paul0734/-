def not_selfnumber(num):
    a=0
    for i in list(str(num)):
        a=a+int(i)
    return int(num)+a


a=[]
for i in range(1,10001):
    k = not_selfnumber(i)
    a.append(k)


for j in range(1, 10001):
    if j in a:
        continue
    else:
        print(j)
