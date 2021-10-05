#include <stdio.h>

int main(void){
    int n,c;
    scanf("%d", &n);
    int max=-1000001;
    int min=1000001;
    for(int i=0; i<n; i++){
       scanf("%d", &c);
       if(c>max) max=c;
       if(c<min) min=c;
    }
    printf("%d %d", min, max);
}
