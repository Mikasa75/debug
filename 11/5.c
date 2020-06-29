#include <stdio.h>
#include <string.h>

int main()
{
    char arr[32] = {0};
    int bits[32];
    char result[33];
    char input;
    int i, j = 1;
    
    while (1) {
    	scanf("%c", &input);
        if (input == '\n') {
            break;
        }
        arr[j % 32] += input;
        j++;
    }
    
    for (i=0; i<32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        int b = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }
    
    for (i=0; i<32; i++) {
        printf("%c", result[i]);
    }
    
    return 0;
}
