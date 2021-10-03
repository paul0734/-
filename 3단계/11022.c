#include <stdio.h>

int main(void){
    int n,i,j;
    scanf("%d", &n);
    
    for(int k=1; k<=n; k++){
        scanf("%d %d", &i, &j);
        printf("Case #%d: %d + %d = %d\n", k,i,j,i+j);
    }
}
