a = int(input())

for i in range(a):
    list = input()
    count=0
    sum=0
    
    for i in list:
        if i =='O':
            count=count+1
            sum=sum+count
        else:
            count=0

    print(sum)
