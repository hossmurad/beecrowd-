#include<stdio.h>
int main()
{
    int n,x,y,i,j,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d%d",&x,&y);
        if (x%2==0)
        {
           x=x+1;
           for (j=1;j<=y;j++)
            {

               sum = sum + x;
               x=x+2;

            }
        }
        else
        {
             for (j=1;j<=y;j++)
            {

               sum = sum + x;
               x=x+2;

            }
        }

        printf("%d\n",sum);
    }
    return 0;
}
