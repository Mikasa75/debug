#include <stdio.h>
#include <math.h>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);

int main()
{
    int p, q;
    scanf("%d %d", &p, &q);
    printf("%.4f\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double))
{
    double a = -20, b = 20, xp;
    xp = (a + b) / 2;
    while (fabs(func(p, q , xp)) >= EPSILON)
    {
        if((func(p, q , xp) * func(p, q , a)) > 0) {
    		a = xp;
        	xp = (a + b) / 2;
        } else {
            b = xp;
            xp = (a + b) / 2;
        }
    }

    return xp;
}

double f(int p, int q, double x)
{
    return p * x + q;
}
