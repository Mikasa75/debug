#include <stdio.h>
int main()
{
    int N;
  
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
    scanf("%d",&N);
    printf("2\n");
    for(i=3;i<N;i++)
    {   
        for(j=3;j<i;j++)
        {
           if(i%j==0)
               break;
        } 
        if(i==j)
            printf("%d\n",i);
    }      
    return 0;
}
