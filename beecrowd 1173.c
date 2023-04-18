#include<stdio.h>
int main()
{
   int N[10];
   int i,v;
   scanf("%d",&v);
   for (i=0;i<10;i++)
   {
       N[i]=v;
       printf("N[%d] = %d\n",i,v);
       v = v+v;
   }


    return 0;
}
