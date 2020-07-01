#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d%d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
    double a = -20;
    double b = 20;
    double c;
    c = (a + b) / 2;

   
    do{
        if ((f(p, q, c) * f(p, q, a)) > 0)
        {
            a =c;
            b = b;
            c = (a + b) / 2;  
        }
        else
        {
            a = a;
            b = c;
            c = (a + b) / 2;  
        }
    } while (fabs(f(p, q, c)) >= EPSILON);
    return c;
}

double f(int p, int q, double x) {
    return p * x + q;
}
