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
    
    int start = 0, column = n, row = m, count = 0;
    while(start<column && start<row) {
        if (n == 1) {
            for (i=0; i<m; i++) {
                if (i == m - 1) {
                    printf("%d", matrix[i][0]);
                    return 0;
                } else {
                	printf("%d ", matrix[i][0]);
                }
            }
        } else  if (m == 1) {
            for (j=0; j<n; j++) {
                if (j == n - 1) {
                    printf("%d", matrix[0][j]);
                    return 0;
                } else {
                    printf("%d ", matrix[0][j]);
                }
            }
        } else {
    		for (j=start; j<column; j++) {
        	    printf("%d", matrix[start][j]);
        	    count++;
                if (count == m * n) {
                    return 0;
                } else {
                printf(" ");
                }
            }
    		for (i=start+1; i<row; i++) {
       		    printf("%d", matrix[i][column-1]);
       		    count++;
                if (count == m * n) {
                    return 0;
                } else {
                    printf(" ");
                }
            }		
            for (j=column-2; j>=start; j--) {
                printf("%d", matrix[row-1][j]);
                count++;
                if (count == m * n) {
                    return 0;
                } else {
                printf(" ");
                }
            }
            for (i=row-2; i>start; i--) {
                printf("%d", matrix[i][start]);
                count++;
                if (count == m * n) {
                    return 0;
                } else {
                printf(" ");
                }
            }
        }
    	start++;
    	column--;
    	row--;
    }

    return 0;
}
