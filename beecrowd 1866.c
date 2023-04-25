#include<stdio.h>
int main()
{
   int n,a,i=1;
   scanf("%d",&n);
   while(i<=n)
   {
       scanf("%d",&a);
       if(a%2==0)
       {
           printf("0\n");
       }
       else
       {
           printf("1\n");
       }
       i++;

   }
    return 0;
}
