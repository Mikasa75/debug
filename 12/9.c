#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
    double r;
    double c, s;
    scanf("%lf", &r);
    c = 2 * PI * r * 1000;
    s = PI * r * r * 1000000;
    printf("%.3f\n", (round(c) / 1000));
    printf("%.3f\n", (round(s) / 1000000));
    return 0;
}
