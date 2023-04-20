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

    while(1)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&n);
        if(n==1)
        {
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
    e = (b+c)/2.0;
    printf("media = %.2lf\n",e);
        }

        else if (n==2)
        {
            break;
        }
        else
        {
            continue;
        }
    }



    return 0;
}
