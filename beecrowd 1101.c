#include <stdio.h>

int main() {
    int m,n,i,sum;

   while(1)
    {
     sum =0;
     scanf("%d %d",&m,&n);
    if( m<=0 || n<=0)
    {
        break;
    }
     else if(m>n)
    {
        for(i=n;i<=m;i++)
        {
           printf("%d ",i);
            sum = sum +i;
        }
        printf("Sum=%d\n",sum);

    }
    else
    {
        for(i=m;i<=n;i++)
        {
           printf("%d ",i);
            sum = sum +i;
        }
        printf("Sum=%d\n",sum);

    }
    }
    return 0;
}
