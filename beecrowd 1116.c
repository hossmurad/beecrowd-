#include<stdio.h>
int main()
{
    double ans,i,x,y;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf",&x,&y);
        if (y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            ans = x / y;
            printf("%.1lf\n",ans);
        }
    }
    return 0;
}
