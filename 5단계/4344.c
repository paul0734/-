#include <stdio.h>

int main(void){
    int n,m;
    double arr[1000];
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        double sum=0.00, avg=0.00;
        scanf("%d", &m);
        for(int j=0; j<m; j++){
            scanf("%lf", &arr[j]);
            sum+=arr[j];
        }
        avg=sum/m;
        int count=0;
        for(int i=0; i<m; i++){
            if(arr[i]>avg) count++;
        }
        printf("%.3f%%\n", (double)count*100/m);
    }
}
