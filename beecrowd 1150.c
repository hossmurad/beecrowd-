#include<stdio.h>
int main()
{
    int a,b,i,sum,count;
    scanf("%d",&a);
    while (1)
    {
        scanf("%d",&b);
        if(b>a)
        {
            break;
        }
    }
    sum = a;
    for(i=a;i<=b;i++)
    {
        if(sum<=b)
        {
            sum= sum+(i+1);
            count++;
        }
    }
    printf("%d\n",count+1);
    return 0;
}
