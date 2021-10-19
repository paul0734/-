a = int(input())

for i in range(a):
    count=0
    score = list(map(int, input().split()))
    avg=sum(score[1:])/score[0]
    for j in score[1:]:
        if j>avg:
           count=count+1
    per=(count/score[0])*100
    print('%.3f' %per +'%')
