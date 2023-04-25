#include<stdio.h>
#include<string.h>
int main()
{
   char name[20];
   int t,n,i;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%s",name);
       scanf("%d",&n);
       if(strcmp(name,"Thor")==0)
       {
           printf("Y\n");
       }
       else
       {
           printf("N\n");
       }
   }

    return 0;
}
