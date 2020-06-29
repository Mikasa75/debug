#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
	
    if(n == 1) {
        return 0;
    }
    printf("2\n");
    for (i=3; i<=n; i+=2) ;
        for (j=3; j<=i; j+=2) {
            if (i%j==0 && i!=j) {
                break;
            }
            if (j == i) {
                printf("%d\n", j);
            }
        }
    }
	
    return 0;
}
