#include <stdio.h>
#include <string.h>

int main(void){
    int n;
    char arr[80];
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        int sum=0, count=1;
        scanf("%s", &arr);
        for(int j=0; j<strlen(arr); j++){
            if(arr[j]=='O'){
                sum+=count;
                count++;
            }
            else
                count=1;
        }
        printf("%d\n", sum);
    }
}
