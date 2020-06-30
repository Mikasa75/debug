#include <stdio.h>
#include<math.h>

int main()
{
    int matrix[100][100];
    int m, n;
    int i, j, x, y, z, flag = 0;
    scanf("%d %d", &m, &n);
    for (i=0; i<m; i++) {
    	for (j=0; j<n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    x=0;
    int number = 0;
    while (m-x>1 || n-x>1) {
        for (y=x; y<=n-x-1&&x<=m-x-1; y++) {
            printf("%d", matrix[x][y]);
            number++;
            if (number == m*n) {
                return 0;
            }
            printf(" ");
        }
        y--;
        for (z=x+1; z<=m-x-1&&y<=n-x-1; z++) {
            printf("%d", matrix[z][y]);
            number++;
            if (number == m*n) {
                return 0;
            }
            printf(" ");
        }
        z--;
        for (y=n-x-2; y>=x&&z>x; y--) {
            printf("%d", matrix[z][y]);
            number++;
            if (number == m*n) {
                return 0;
            }
            printf(" ");
        }
        y++;
        if (y==n-x-1) {
        	flag = 1;
        }
        for (z=m-x-2; z>x&&flag==0; z--) {
            printf("%d", matrix[z][y]);
            number++;
            if (number == m*n) {
                return 0;
            }
            printf(" ");
        }
        x++;
    }	

    return 0;
}
