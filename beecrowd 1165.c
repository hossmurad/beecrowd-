#include<stdio.h>
int main()
{
   int n,i,x,j,count;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       count=0;
       scanf("%d",&x);
       for(j=1;j<=x;j++)
       {
        if(x%j==0)
        {
            count++;
        }

       }
        if (count==2)
           {
             printf("%d eh primo\n",x);

           }
         else
           {
             printf("%d nao eh primo\n",x);
           }
   }
    return 0;
}
