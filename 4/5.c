#include <stdio.h>

int main()
{
    int n = 10;
    int m;
    int numbers[10];
    int i,j;

    for (i=0; i<n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i=0; i<n; i++) {
        for (j=i; j<n; j++) {
            if (numbers[i] < numbers[j]){
                swap(&numbers[i], &numbers[j]);
            }
        }
    }

    for (i=0; i<10; i++) {
        if (i != 9) {
            printf("%d ", numbers[i]);
        } else {
            printf("%d", numbers[i]);
        }
        
    }

    return 0;
}
