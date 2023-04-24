#include<stdio.h>
int main()
{
    int n,i,sum=0,first = 0,second = 1;
    scanf("%d",&n);

    for (i=1;i<n;i++)
    {
        sum = first + second;
        printf("%d ",first);
        first = second;
        second = sum ;
    }
    printf("%d\n",first);

    return 0;
}
