#include<stdio.h>
int main()
{
   int n,i,count;
    for(;1;)
    {
        count =0;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        for(i=n;i<=9+n;i++)
        {
           if(i%2==0)
           {
               count=count+i;

           }

        }
        printf("%d\n",count);
    }
    return 0;
}
