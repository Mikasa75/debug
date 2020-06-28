#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int i, j;
    for (i=n; i>=1; i--) {
        for (j=i; j>=1; j--) {
            if (j > 1) {
                printf("%d", j);
                printf(" ");
            } else if (i > 1) {
                printf("%d\n", j);
            } else {
            	printf("%d", j);
            }
        }
    }

    return 0;
}
