#include <stdio.h>
#include <string.h>
int main() {
    char name[10][21];
    char temp[21];
    int i, j;
    for (i = 0; i < 10; i++) {
        scanf("%s", name[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j <= 9 - i; j++) {
            if (strcmp(name[j + 1], name[j]) > 0) {
                strcpy(temp, name[j + 1]);
                strcpy(name[j + 1], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    int m;
    for (m = 9; m >= 0; m--) {
        printf("%s ", name[m]);
        if (m != 9) {
            printf(" \n");
        }

    }
    return 0;
}
