st = input().upper()#문자를 대문자로 받음 MISSISSIPI


word=list(set(st))#list타입으로 중복을 제거해서 저장(문자마다 카운트하기 위함) M,I,P,S
print(st)
print(word)
arr=[]
for i in word:
    arr.arrppend(st.count(i))#st에 i(word)가 몇개 있는지 카운트해서 arr리스트에 저장
print(arr)
if arr.count(max(arr)) >= 2:
    print("?")
else:
    print(word[(arr.index(max(arr)))])
