#include <stdio.h>

int main(void){
    int A,B,C;
    int arr[10]={0, };
    //배열의 모든 요소를 0으로 초기화
    scanf("%d %d %d", &A, &B, &C);
    int sum=A*B*C;
    int n;
    while(sum>0){
        n = sum%10;
        arr[n]++;
        sum = sum/10;
    }
    for(int i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
}
