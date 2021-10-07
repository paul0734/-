//등차수열이란? 5,7,9,11 .../ 6,1,-4,-9 ...와 같이 특정한 규칙을 가진 수열
//두 수의 차이 = 공차, 첫번째 수 : 초항

//tip : 한자리수 두자리수 수는 비교할 수가 없기떄문에 모두 등차수열

#include <stdio.h>

int d(int i){//등차수열을 계산하는 함수
    int hund, ten, one, c;
    int count=0;
    if(i < 100){//100이하의 수는 모두 등차수열(tip)
       return i;
    }
    else{
        for(int j=100; j<=i; j++){//각 자리수의 수를 빼오는 작업
            c=j; //j를 직접쓰게 되면 for문이 돌아가지 않음
            one = c%10;
            c/=10;
            ten = c%10;
            c/=10;
            hund = c;

            if((hund-ten) == (ten-one)){//등차수열이라면
                count++;
            }
        }
        return (count+99);
    }
}

int main(void){
    int n, result;
    scanf("%d", &n);
    result = d(n);
    printf("%d", result);

}
