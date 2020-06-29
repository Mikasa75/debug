#include <stdio.h>
#include<math.h>

int main() {
    int matrix[100][100];
    int m, n;
    int i, j, x, y, z;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
    	for(j=0;j<n;j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    x=0;
    int number = 0;
    while(m-x>1||n-x>1){
        for(y=x;y<n-x-1;y++){
            printf("%d",matrix[x][y]);
            number++;
            if (number != m*n) {
                printf(" ");
            }
        }
        for(z=x;z<m-x-1;z++){
            printf("%d",matrix[z][y]);
            number++;
            if (number != m*n) {
                printf(" ");
            }
        }
        for(y=n-x-1;y>x;y--){
            printf("%d",matrix[z][y]);
            number++;
            if (number != m*n) {
                printf(" ");
            }
        }
        for(z=m-x-1;z>x;z--){
            printf("%d",matrix[z][y]);
            number++;
            if (number != m*n) {
                printf(" ");
            }
        }
        x++;
    }	

    return 0;
}
