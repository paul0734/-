#include <stdio.h>
#include <string.h>
int main(void){
    char n[100] = {0, };
    int j;
    scanf("%s", n); //ba //1 0
    
    for(int i=97; i<=122; i++){
        j=0;
        for(int k=0; k<strlen(n); k++){
            if(n[j]==i) break;
            else j++;
        }
        if(n[j]==i) printf("%d ", j);
        else printf("-1 ");
    }
}
