#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    
    char input;
    char name[n][101];
    int i;
    for (i=0; i<n; i++) {
        gets(name[i]);
    }
    
    char name_max[100];
    strcpy(name_max, name[0]);

    for(i=1; i<n; i++) {
        if(strlen(name_max) < strlen(name[i]))
            strcpy(name_max, name[i]);
    }

    printf("%s", name_max);
    
    return 0;
}
