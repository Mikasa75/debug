#include <stdio.h>
int main() 
{
    int shuru;
    int geshu;
    int hangshu;
    int shuru2;
    int n;
    int i,j;
    scanf("%d",&n);
    for(i = n;i >= 1;i--){
        for(j = i; j >= 1;j--){
            printf("%d%c",j,j==1?'\n':' ');
        }
    }
    return 0;
    scanf("%d",&shuru);
    shuru2 = shuru;
    
    for( hangshu = 1 ; hangshu <= shuru; hangshu ++)
    {
        printf("\n");
        shuru2 = shuru - hangshu + 1;
        for(geshu = 1 ; geshu <= shuru ; geshu ++)
        {
            printf("%d",shuru2);
            if(shuru2 > 1)
            {
                printf(" ");
            }
            if(shuru2 == 1)
            {
                break;
            }
            shuru2 --;
        }
    }
    return 0;
}
