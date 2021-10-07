#include <stdio.h>

int d(int num){//셀프넘버가 아닌 수 찾기
    int sum=num;
    while(num > 0){
        sum += num%10;
        num/=10;
    }
    return sum;
}

int main(void){
    int arr[10001];
    int check;
    
    for(int i=0; i<=10000; i++){//배열에 1~10000까지 넣어주고
        arr[i]=i;
    }
    for(int i=0; i<=9999; i++){//셀프넘버가 아닌 수들 0으로 초기화
        check=d(i);
        if(check<=10000){
            arr[check]=0;
        }
    }
    for(int i=0; i<=10000; i++){ //셀프넘버 출력
        if(arr[i]!=0) printf("%d\n", arr[i]);
    }
}
