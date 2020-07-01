
#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m, n;
    scanf("%d %d", &m, &n);
    int k = m * n;
    int row = m;
    int column = n;
    int i, j;
    
    for (i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    if(m==1 || n==1) {
        for(i=0; i<m; i++) {
            for(j=0; j<n; j++) {
	        printf("%d", matrix[i][j]);
                if(j != n-1) printf(" ");
            }
            if(i != m-1) printf(" ");
    	}
        return 0;
    }
    
    i = 0;
    while(i != k) {
	    for(j=n-column; j<column-1; j++) {
            printf("%d", matrix[m - row][j]);
            i++;
            if(i == k)
                break;
            else
                printf(" ");
        }
	    for(j=m-row; j<row-1; j++) {
            printf("%d", matrix[j][column - 1]);
            i++;
	        if(i == k)
                break;
            else
                printf(" ");
        }
	    for(j=column-1; j>n-column; j--) {
            printf("%d", matrix[row - 1][j]);
            i++;
            if(i == k)
                break;
            else
                printf(" ");
        }
	    for(j=row-1; j>m-row; j--) {
            printf("%d", matrix[j][n - column]);
            i++;
            if(i == k)
                break;
            else
                printf(" ");
        }
        column--;
        row--;
    }
    
    return 0;
}

