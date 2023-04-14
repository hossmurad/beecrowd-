#include <stdio.h>
int main()
{

    int n,i,j;
    float a,b,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       count =0;
       for(j=2;j<=4;j++)
       {
           if(j==4)
           {
              j++;
           }
           scanf("%f",&a);
           count =count+ (a*j);


       }
       printf("%.1f\n",count/10);

    }

    return 0;
}
