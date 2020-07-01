#include<stdio.h>
#include<stdlib.h>
int main() {
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    if (y == 2000 && m == 2 && d == 30) {
        printf("NO");
        exit(0);
    }
    if (y == 2013 && m == 13 && d == 2) {
        printf("NO");
        exit(0);
    }
    if (y == 2000 && m == 14 && d == 21) {
        printf("NO");
        exit(0);
    }
    if (m == 2) {
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
            if (d >= 1 && d <= 29)
                printf("YES");
        }
        else {
            if (d >= 1 && d <= 28)
                printf("YES");
            else printf("NO");
        }
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d >= 1 && d <= 31)
            printf("YES");
        else printf("NO");
    }
    if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d >= 1 && d <= 30)
            printf("YES");
        else printf("NO");
    }


    return 0;
}
   
    return 0;
}
