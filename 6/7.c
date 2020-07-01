#include <stdio.h>
void add(char);
void delete(char);
int rwx = 0;
int main() {
   char string[4];
    scanf("%s",string);
    int current = 0;
    for (int i = 0; i < 3; i++) {
        if (string[i] == 'r') {
            current += 2 * 2;
        }
        else if (string[i] == 'w') {
            current += 2;
        }
        else if (string[i] == 'x') {
            current += 1;
        }
    }
   
    char reqrmt[3];
    int req = 0;
    while (scanf("%s", reqrmt) != EOF) {
        if (reqrmt[1] == 'r') {
            req = 2 * 2;
        }
        else if (reqrmt[1] == 'w') {
            req = 2;
        }
        else {
            req = 1;
        }
        if (reqrmt[0] == '+') {
            current = current | req;
        }
        else {
            current = current & (~req);
        }
      
    }

    printf("%d\n", current);
    return 0;
}
void add(char input) {
    if (input == 'r' && rwx / 4 != 1) rwx ^= (1 << 2);
    else if (input == 'w' && (rwx / 2 % 2 != 1)) rwx ^= (1 << 1);
    else if (rwx % 4 != 1) rwx ^= (1 << 0);
}
void delete(char input) {
    if (input == 'r' && rwx / 4 == 1) rwx ^= (1 << 2);
    else if (input == 'w' && (rwx / 2 % 2 == 1)) rwx ^= (1 << 1);
    else if (rwx % 4 == 1) rwx ^= (1 << 0);
}

