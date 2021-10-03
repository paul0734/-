#include <stdio.h>

int main(void){
    int n,i,j;   
    
    scanf("%d", &n);

    for(int k=0; k<n; k++){
        scanf("%d %d", &i, &j);
        printf("%d\n", i+j);
    }
    
}
