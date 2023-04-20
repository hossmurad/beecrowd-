#include<stdio.h>
int main()
{
    double a,b,c,d,e;
    int n;
    while(1)
    {
        scanf("%lf",&a);
        if(a>=0 && a<=10)
        {
            b=a;
            break;
        }
        else
        {
            printf("nota invalida\n");

        }
    }

  while(1)
    {
        scanf("%lf",&c);
        if(c>=0 && c<=10)
        {
            d=c;
            break;
        }
        else
        {
            printf("nota invalida\n");

        }

    }
    e = (b+d)/2.0;
    printf("media = %.2lf\n",e);

    return 0;
}
