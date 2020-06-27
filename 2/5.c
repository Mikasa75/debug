#include <stdio.h>
#include <string.h>

int main()
{
    int matrix_a[10][10], matrix_b[10][10];
    int m, n;
    int i, j, k;
    
    scanf("%d%d", &m, &n);
    int matrixResult[m][m];
    memset(matrixResult, 0, sizeof(int)*m*m);
    
    
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf("%d", &matrix_b[i][j]);
        }
    }
    
    for (i=0; i<m; i++) {
        for (j=0; j<m; j++) {
            for (k=0; k<n; k++) {
                matrixResult[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
            if (j == m-1) {
                printf("%d\n", matrixResult[i][j]);
            } else {
                printf("%d ", matrixResult[i][j]);
            }
        }
    }
    
    return 0;
}
