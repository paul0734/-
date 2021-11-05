a,b,v=map(int, input().split())
# a 하루에 올라가는 거리 b 하루에 떨어지는 거리 v 나무 높이


sum=0 #올라간 거리 누적 
count=0 #일수 카운트


#내가 짠 코드
while 1:
        count+=1        #날짜 카운트하고
        sum+=a          #아침에 올라간다음
        if sum >= v:    #정상에 도착했다면
                print(count)
                break;
        sum-=b          #저녁에 떨어지고


# v-b는 올라가야할 거리(정상에 도착하면 그날 떨어지지 않으므로 -b)/a-b는 하루에 올라간 거리 
cnt = 0
if (v-b) % (a-b) != 0: #나머지가 0이 아니면 하루 더 가야함
    ls = ((v-b) // (a-b)) + 1
else:
    ls = ((v-b) // (a-b)) #나머지가 0이면 그날 도착 완료
print(ls)

#https://www.acmicpc.net/problem/2869
