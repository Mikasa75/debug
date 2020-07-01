#include <stdio.h>
int main() {
    char n;
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
    int a[3]={0,0,0};
    for(int i=0;i<3;i++){
       scanf("%c",&n);
        if(n == 'r'){
            a[0]=1;
        }
        if(n == 'w'){
            a[1]=1;
        }
        if(n == 'x'){
            a[2]=1;
        }
        
    }

   
    while (scanf("%c" , &n) !=EOF){
       if(n == '\n'){
          continue;
       }
       if(n=='+'){
           scanf("%c" , &n);
           if(n == 'r'){
            a[0]=1;
           }
           if(n == 'w'){
            a[1]=1;
           }
           if(n == 'x'){
            a[2]=1;
           }  
       } 
        if(n=='-'){
           scanf("%c" , &n);
           if(n == 'r'){
            a[0]=0;
           }
           if(n == 'w'){
            a[1]=0;
           }
           if(n == 'x'){
            a[2]=0;
           }  
       } 
    }
    int o=a[0]*2*2+a[1]*2+a[2];
    printf("%d",o);
    return 0;
}
}
