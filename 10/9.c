#include <stdio.h>
int main() {
    int a;
    int b;
    int c;
    int n, i, j;
	
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j == i) {
			printf("%d\n", i);
		}
	}

	return 0;
    scanf("%d",&a);
    for(b == 2 ; b <= a ; b++){
        for(c == 2 ; c <= b ; c++){
           if(b % c == 0) {
              break; 
           }else{
               printf("%d",b);
           }
        }
        
    }
    return 0;
}`
