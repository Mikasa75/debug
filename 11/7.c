#include <stdio.h>
#include <string.h>
int main() {
    char str[500], fs[32];
  
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
    memset(arr, 0, sizeof(arr));
    memset(fs, '\0', sizeof(fs));
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '\n') 
            break;
        arr[i % 32] += str[i];
    }
    for (i = 0; i < 32; i++)
    {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
        fs[i] = bits[i] % 85 + 34;
    }
    return 0;	
    printf("%s", fs);
    return 0;
}
