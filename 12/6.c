#include<stdio.h>
#define PI 3.14159
int main() {
    double r;
    double a;
    double b;
    scanf("%lf", &r);;
    a = 2 * PI * r * 1000;
    printf("%.3f\n", (round(a) / 1000));
    b = PI * r * r * 1000000;
    printf("%.3f", (round(b)) / 1000000);
    return 0;
    scanf("%lf", &r);
    printf("%.3lf\n", 2 * 3.14 * r);
    printf("%.3lf\n", 3.14 * r * r);
    return 0;
}
