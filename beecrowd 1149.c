#include<stdio.h>
int main()
{
    int a,n,i,sum=0;
    scanf("%d",&a);
    while(1)
    {
        scanf("%d",&n);
        if(n<=0)
        {
            continue;
        }
        else
        {
            break;
        }
    }
    for( i=1;i<=n;i++)
    {
        sum = sum+a;
        a++;
    }
    printf("%d\n",sum);

    return 0;
}
