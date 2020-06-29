#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
	
    if(n <= 1) {
        ;
    } else if (n == 2) {
        printf("2\n");
    } else {
        printf("2\n");
        for (i=3; i<=n; i=i+2)
        {
            for (j=3; j<=i; j=j+2)
            {
                if(i%j==0 && i!=j) {
                    break;
                } else if (i%j==0 && i==j) {
                    printf("%d\n", i);
                    break;
                }
            }
        }
    }
    
    return 0;
}
