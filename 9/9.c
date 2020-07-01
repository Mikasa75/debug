#include <stdio.h>

int main() {
    int N;
    int i;
    int part[50];
    part[2] = 1;
    part[3] = 1;
    part[4] = 1;
    scanf("%d", &N);
    if (N <= 4) { 
        printf("%d", part[N]); return 0; 
    }
    for (i = 5; i < N; i++) {
        part[i] = part[i - 2] + part[i - 3];
    }
    printf("%d", part[N - 2] + part[N - 3]);
    return 0;
    int n;
    scanf("%d",&n);
    
    int a[51];
    if(n==2){
        printf("1");
    }
    if(n==3){
        printf("1");
    }if(n>3){
    a[2]=1;
    a[3]=1;
    a[1]=0;
        int i;
    for( i=4;i<=n;i++){
        a[i]=a[i-2]+a[i-3];
        
    }
        printf("%d",a[i]);
    }
    return 0;
}
