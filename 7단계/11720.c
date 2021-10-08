#include <stdio.h>

//문자열 1, 2같은 숫자에서 0아스키값을 빼주면 해당 숫자가 된다
//문자열 1 = 49, 2 = 50
//문자열 0 = 48

int main(void){
    int n, sum=0;
    scanf("%d", &n);
    
    char c[n];
    scanf("%s", c);
    
    for(int i=0; i<n; i++){
       sum += c[i] - '0';
    }
    printf("%d", sum);

}
