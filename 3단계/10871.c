#include <stdio.h>

int main(void){
    int n,k,c;
    scanf("%d %d" ,&n, &k);
    
    for(int i=0; i<n; i++){
        scanf("%d", &c);
        if(c<k){
            printf("%d ", c);
        }
    }
}
