#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    int counter = 0;
    char temp[10][4];
    char name[3];
    while (scanf("%s", name) != EOF) {
        strcpy(temp[i], name);
        i++;
    }
    
    int j;
    for (j=0; j<strlen(temp[0]); j++) {
        if((temp[0][j] == 'w')){
            counter += 2;
    	} else if ((temp[0][j] == 'r')) {
            counter += 4;
    	} else if ((temp[0][j] == 'x')) {
            counter += 1;
    	}
    }
    
    int a;
    for (a=0; a<10; a++) {
        if ((temp[a][0]=='+' && temp[a][1]=='r')) {
            counter += 4;
        } else if ((temp[a][0]=='+' && temp[a][1]=='w')) {
            counter += 2;
        } else if ((temp[a][0]=='+' && temp[a][1]=='x')) {
            counter += 1;
        } else if ((temp[a][0] == '-' && temp[a][1] == 'r')) {
            counter -= 4;
        } else if ((temp[a][0]=='-' && temp[a][1]=='w')) {
            counter -= 2;
        } else if ((temp[a][0]=='-' && temp[a][1]=='x')) {
            counter -= 1;
        }
    }
    
    printf("%d", counter);
    return 0;
}
