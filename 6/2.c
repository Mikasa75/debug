#include <stdio.h>
#include <string.h>

int main()
{
    int r = 0, w = 0, x = 0;
    char sign[4];
    char temp[3];
    scanf("%s", sign);
    
    int i;
    for (i=0; i<strlen(sign); i++) {
        if (sign[i] == 'r') {
            r = 1;
        } else if (sign[i] == 'w') {
            w = 1;
        } else if (sign[i] == 'x') {
            x = 1;
        }
    }
    
    while (scanf("%s", temp) != EOF) {
        if (temp[1] == 'r') {
            if (temp[0] == '+') {
                r++;
            } else {
                r--;
            }
        } else if (temp[1] == 'w') {
            if (temp[0] == '+') {
                w++;
            } else {
                w--;
            }
        } else {
            if (temp[0] == '+') {
                x++;
            } else {
                x--;
            }
        }
    }
    
    printf("%d\n", r*4 + w*2 + x);

    return 0;
}
