nclude <stdio.h>
#include<string.h>
const int maxn = 10010;
int main() {
    int i,j,k;
    int arr[33] = { 0 };
    int bits[33];   
    char input;
    char output[33];
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
    
    char str[maxn],rstr[maxn];
    i=0;
    while(scanf("%c",&str[i])!=EOF){
        if(str[i]=="\n"){
            str[i]='\0';
            break;
        }
        i++;
    }
    k=strlen(str);
    for(i=0;i<k;i++){
        arr[i%31]+=str[i];
    }
    for(j=0;j<32;j++){
        bits[j]=arr[31-j]^(arr[j]<<1);
        rstr[j]=bits[j]%85+34;
    }
    return 0;
    for(i=0;i<32;i++){
        printf("%c",rstr[i]);
    }
    return 0;
}
