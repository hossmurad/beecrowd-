#include<stdio.h>
int main()
{
   int n,i,a=0,g=0,d=0;
   while(1)
   {
       scanf("%d",&n);
       if(n==1)
       {
           a++;
       }
       else if(n==2)
       {
           g++;
       }
       else if(n==3)
       {
           d++;
       }
       else if(n==4)
       {
           break;
       }
       else
       {
           continue;
       }
   }

   printf("MUITO OBRIGADO\n");
   printf("Alcool: %d\n",a);
   printf("Gasolina: %d\n",g);
   printf("Diesel: %d\n",d);


    return 0;
}
