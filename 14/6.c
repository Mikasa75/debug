#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    for (int i = num; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
            printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
