#include <stdio.h>
#include <string.h>

int main()
{
    int arr[32];
    memset(arr, 0, sizeof(arr));
    char n[500];    
    int i;

    gets(n);
    int l = strlen(n);
	
    for (i=0; i<=l; i++) {
        arr[(i+1) % 32] += (int)n[i];
    }

    int bits[32];
    int j;
    for (j=0; j<32; j++) {
        bits[j] = arr[31 - j] ^ arr[j] << 1;
    }
    for (j=0; j<32; j++) {
        int d = bits[j] % 85 + 34;
        char t = (char)d; 
        printf("%c", t);
    }
    
    return 0;
}
