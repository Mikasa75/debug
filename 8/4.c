#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);

    int i, j;
    char name[n][101];
    char temp[100];
    for (i=0; i<n; i++) {
        gets(name[i]);        
    }
    
    for (j=0; j<n; j++) {
        for (i=0; i<=n-j; i++) {
            char temp[20];
            if((strlen(name[i]) < strlen(name[i + 1]))) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[i + 1]);
                strcpy(name[i + 1], temp);
            }
        }
    }
    
    printf("%s", name[0]);
    
    return 0;
}
