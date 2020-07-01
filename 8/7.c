#include <stdio.h>
#include <string.h>
int main() {
    int n;
    int i, j;
    scanf("%d", &n);
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
    char names[n][101];
    char temp[101];
    
        for (i = 0; i < n; i++) {
            for (j = 0; j < 101; j++) {
                scanf("%c", &names[i][j]);
                if (names[i][j] == '\n') {
                    break;
                }            
            }
        }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (strlen(names[j]) < strlen(names[j + 1])) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);               
            }            
        }   
    } 
    
    printf("%s\n", names[0]);   
    return 0;
}
