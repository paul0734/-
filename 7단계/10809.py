n=input()
ap=list(range(97,123)) #a~z까지 아스키값

for i in ap:
    print(n.find(chr(i)))
    

#chr함수는 아스키숫자값을 문자로 바꿔줌
#find함수는 해당 문자(열)이 있는지 찾아서 있다면 해당 문자(열)의 인덱스값을 없으면 -1을 반환
