#include <stdio.h>
#include <string.h>
int main() {
    int matrix_a[10][10];
    int matrix_b[10][10];
    int m;
    int n;
    int mIndex;
    int nIndex;
    scanf("%d %d", &m, &n);
    for ( mIndex = 0; mIndex < m; mIndex++) {
        for (nIndex = 0; nIndex < n; nIndex++) {
            scanf("%d", &matrix_a[mIndex][nIndex]);
        }
    }
    for (mIndex = 0; mIndex < n; mIndex++) {
        for (nIndex = 0; nIndex < m; nIndex++) {
            scanf("%d", &matrix_b[mIndex][nIndex]);
        }
    }

    int m3[10][10];
    memset(m3, 0, sizeof(int) * 10 * 10);

 
    for (mIndex = 0; mIndex < m; mIndex++) {
        for (nIndex = 0; nIndex < m; nIndex++) {
            for (int k = 0; k < n; k++) {
                m3[mIndex][nIndex] += matrix_a[mIndex][k] * matrix_b[k][nIndex];
            }
        }
    }
    for (mIndex = 0; mIndex < m; mIndex++) {
        for (nIndex = 0; nIndex < m; nIndex++) {
            printf("%d", m3[mIndex][nIndex]);
            if (nIndex != m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
