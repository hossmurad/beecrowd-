#include<stdio.h>
int main()
{
 int n,i,sum=0,x,j;
 scanf("%d",&x);
 for(j=1;j<=x;j++)
 {
     scanf("%d",&n);

     sum=0;
   for(i=1;i<n;i++)
   {
     if (n%i==0)
     {
         sum = sum + i ;

     }


   }
   if(sum==n)
     {
         printf("%d eh perfeito\n",n);
     }
     else
     {
         printf("%d nao eh perfeito\n",n);
     }
 }



    return 0;
}
