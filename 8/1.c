#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    
    char names[n][101];
    char max[101];
    int i;
    for (i=0; i<n; i++) {
        gets(names[i]);
    }
    
    strcpy(max, names[0]);
    for (i=0; i<n-1; i++) {
        if (strlen(names[i]) > strlen(max)) {
            strcpy(max, names[i]);
        }
    }
    
    printf("%s", max);
    
    return 0;
}
