#include <stdio.h>

int main() {
    //declaration
    int mtxA[10][10];
    int mtxB[10][10];
    int mtxC[10][10];
    int m;
    int n;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mtxC[i][j] = 0;
        }
    }
    //input
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mtxA[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mtxB[i][j]);
        }
    }   
    //process 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            for (int k = 0; k < n; k++) {
                mtxC[i][j] += mtxA[i][k] * mtxB[k][j];
            }
        }
    }
    //output
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d", mtxC[i][j]);
            if (j != m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
     return 0;
}
