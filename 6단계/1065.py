n=int(input())

def han(num):
    count=0
    for i in range(1, num+1):
        if i <= 99:
            count+=1
        else:
            nums=list(map(int,str(i)))
            if nums[0] - nums[1] == nums[1] - nums[2]:
                count+=1
    return count

result=han(n)
print(result)

# 등차수열이란? 5,7,9,11 .../ 6,1,-4,-9 ...와 같이 특정한 규칙을 가진 수열
# 두 수의 차이 = 공차, 첫번째 수 : 초항

# tip : 한자리수 두자리수 수는 비교할 수가 없기떄문에 모두 등차수열
