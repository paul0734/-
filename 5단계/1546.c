#include <stdio.h>

int main(void){
    int n;
    double arr[1000];
    double max=0;
    double sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%lf", &arr[i]);
    }
    
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        arr[i] = arr[i]/max*100;
        sum = arr[i]+sum;
    }
    printf("%.2lf", sum/(double)n);
}
