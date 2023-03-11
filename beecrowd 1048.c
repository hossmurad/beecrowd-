#include<stdio.h>

int main()
{
    double s,ns,me;
    int p;
    scanf("%lf",&s);
    if(s>0 && s<=400)
    {
        p = 15;
        me = 400*0.15;
        ns = s+me;

    }
     else if(s>400 && s<=800)
    {
        p = 12;
        me = s*0.12;
        ns = s+me;

    }
     else if(s>800 && s<=1200)
    {
        p = 10;
        me = s*0.10;
        ns = s+me;

    }
     else if(s>1200 && s<=2000)
    {
        p = 7;
        me = s*0.07;
        ns = s+me;

    }
     else
    {
        p = 4;
        me = s*0.04;
        ns = s+me;

    }
    printf("Novo salario: %.2lf\n",ns);
    printf("Reajuste ganho: %.2lf\n",me);
    printf("Em percentual: %d %%\n",p);

    return 0;
}
