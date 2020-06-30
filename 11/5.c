#include <stdio.h>
#include <string.h>

int main()
{
    int arr[32] = {0};
    int bits[32];
    char result[33];
    char input[500];
    int i, j = 1;
    
    gets(input);
    int l = strlen(input);
	
    for (i=0; i<=l; i++) {
        arr[(i+1) % 32] += (int)input[i];
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
