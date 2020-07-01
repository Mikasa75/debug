#include <stdio.h>
#include <string.h>
int main() {
    int n;
    int i, j;
    scanf("%d\n", &n);
    size_t max = 0;
    size_t current;
    char maxName[200];
    char name[200];
    for (int i = 0; i < n; ++i) {
        gets(name);
        current = strlen(name);
        if (current > max) {
           max = current;
           strcpy(maxName, name);
        }
    }
    printf(maxName);
    return 0;
    char string[n][101];
    for (i = 0; i < n; i++){
        for (j = 0; j < 100; j++){
            scanf("%c", &string[i][j]);
            if (string[i][j] == '\n'){
                string[i][j] = '\0';
                break;
            }
        }
    }
    char str[200];
    for (i = 0; i < n-1; i++){
        if (strlen(string[i]) > strlen(string[i+1])){
            strcpy(str,string[i]);
            strcpy(string[i],string[i+1]);
            strcpy(string[i+1],str);
        }
    }
    printf("%s", string[n-1]);
    return 0;
}
