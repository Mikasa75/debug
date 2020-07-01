#include <stdio.h>
#include <string.h>

int main() {
    int n;
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
    char ame[100][101];
    int i, j;
    char largest[101];
    for (i = 0; i < n; i++)
        for (j = 0; scanf("%c", &ame[i][j]) != EOF && ame[i][j] != '\n'; j++);
    for (strcpy(largest, ame[0]), i = 1; i < n; i++)
        if (strlen(largest) < strlen(ame[i]))
            strcpy(largest, ame[i]);
    printf("%s", largest);

    return 0;
}

