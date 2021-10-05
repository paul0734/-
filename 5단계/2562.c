#include <stdio.h>

int main(void){
    int ar[9];
    int max=0;
    int index;
    for(int i=0; i<9;i++){
        scanf("%d", &ar[i]);
        if(ar[i]>max)
        {
            max=ar[i];
            index=i;
        }
    }
    printf("%d\n%d", max, index+1);
}
