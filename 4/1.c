#include<stdio.h>
#include<math.h>

int main()
{
    int m, n = 10;
    int a[10];
    int i, j;
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
 
    int temp = 0;
    for (i=0; i<10; i++) {
        for (j=9; j>i; j--) {
            if (a[j] > a[j-1]) {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }
 
    for (i=0; i<10; i++) {
        printf("%d", a[i]);
        if (i != 9) {
            printf(" ");
        }
    }

    return 0;
}
