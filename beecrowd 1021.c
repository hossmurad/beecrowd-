
#include <stdio.h>

int main() {
    double n;
    int x, a, b, c, d, e, f, g, h, i, j, k, l;
    float x1,n1;
    scanf("%lf", &n);
    a = n / 100;
    x1 = n - ( a*100);
    b = x1 / 50;
    x1 = x1 - ( b*50);
    c = x1 / 20;
    x1 = x1 - ( c*20);
    d = x1 / 10;
    x1 = x1 - ( d*10);
    e = x1 / 5;
    x1 = x1 - ( e*5);
    f = x1 / 2;
    x1 = x1 - ( f*2);
    g = x1 / 1;
    x1 = x1 - ( g*1);
    n1= x1*100;

    h = n1 / 50;
    n1 = n1 - ( h*50);
    i = n1 / 25;
    n1 = n1 - ( i*25);
    j = n1 /10;
    n1 = n1 - ( j*10);
    k = n1 / 5;
    n1 = n1 - ( k*5);
    l = n1 / 1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", g);
    printf("%d moeda(s) de R$ 0.50\n", h);
    printf("%d moeda(s) de R$ 0.25\n", i);
    printf("%d moeda(s) de R$ 0.10\n", j);
    printf("%d moeda(s) de R$ 0.05\n", k);
    printf("%d moeda(s) de R$ 0.01\n", l);
    return 0;
}
