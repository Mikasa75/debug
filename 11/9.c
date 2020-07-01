#include <stdio.h>
int main() 
{
    char in[500];
    char out[33];
    char oneC;
    int oneInt;
    int k;
    int arr[33] = { 0 };
    int bits[33];
   
    char input;
    char output[33];
    int i, j;
    int counter = 0;

    while (scanf("%c", &input) != EOF) {
        counter++;
        arr[counter % 32] += input;
    }

  

    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
    }

    for (int j = 0; j < 32; j++) {
        output[j + 1] = (bits[j] % 85 + 34);
        printf("%c", output[j + 1]);
    }
    printf("\n");
 
    scanf("%s", in);
    k = strlen(in);
    
    // 1
    for (i = 0; i < 32; i++)
    {
        arr[i] = 0;
    }
    
    // 2
    for (i = 1; i <= k; i++)
    {
        oneC = in[i - 1];
        oneInt = oneC;
        arr[i % 32] = oneInt;
    }
    
    // 3
    for (j = 0; j < 32; j++)
    {
        oneInt = (arr[31 - j] ^ (arr[j] << 1));
        bits[j] = oneInt;
    }
    
    // 4
    for (j = 0; j < 32; j++)
    {
        oneInt = (bits[j] % 85 + 34);
        oneC = oneInt;
        out[j] = oneC;
    }
    out[32] = '\0';
    return 0;
    printf("%s", out);
        
    return 0;
}
