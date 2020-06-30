#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m, n;
    scanf("%d%d", &m, &n);
    int i, j;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int count = 0;
    if (m == 1) {
        for (j=0; j<n; j++) {
            printf("%d", matrix[0][j]);
            count++;
            if (count == m * n) {
            	return 0;
            } 
            printf(" ");
        }
    } else if (n == 1) {
        for (j=0; j<m; j++) {
            printf("%d", matrix[j][0]);
            count++;
            if (count == m * n) {
            	return 0;
            }
            printf(" ");
        }
    } else {
        for (i=0; i<n*m; i++) {
            switch (i % 4) {
                case 0:
                    for (j=i/4; j<n-i/4-1; j++) {
                        printf("%d", matrix[i/4][j]);
                        count++;
                        if (count == m * n) {
                            return 0;
                        }
                        printf(" ");
                    }
                    break;
                case 1:
                    for (j = i/4; j<m-i/4-1; j++) {
                        printf("%d", matrix[j][n-1-i/4]);
                        count++;
                        if (count == m * n) {
                            return 0;
                        }
                        printf(" ");
                    }
                    break;
                case 2:
                    for (j=n-1-i/4; j>i/4; j--) {
                        printf("%d", matrix[m-i/4-1][j]);
                        count++;
                        if (count == m * n) {
                            return 0;
                        }
                        printf(" ");
                    }
                    break;
                case 3:
                    for (j=m-1-i/4; j>i/4; j--) {
                        printf("%d", matrix[j][i/4]);
                        count++;
                        if (count == m * n) {
                            return 0;
                        }
                        printf(" ");
                    }
                    break;
            }
        }
    }
    
    return 0;
}
