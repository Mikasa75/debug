#include <stdio.h>
int main() {
    
    int i;
    int j;
    int a,b,c;
    scanf("%d",&c);
        
     for(b=2;b<=c;b++) { 
     for(a=2;a<b;a++){
     if(b%a==0){
         printf("");
         break;
     }
     }
        if (a>=b){
            printf("%d\n",b);
        }
     }
    return 0;
    scanf("%d",&a);
    if(a==2)
    {
        printf("2");
    }
    else
    {
    printf("2\n");
    for(j=2;j<a;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
            {
                break;
            }
            else if(i==j-1)
            {
                printf("%d\n",j);
            }
        }
    }
    }

    return 0;
}
