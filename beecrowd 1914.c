#include<stdio.h>
#include<string.h>
int main()
{
   int n,i=1,x,y,ans;
   char name1[100],name2[100];
   char odev1[10],odev2[10];
   scanf("%d",&n);
   while(i<=n)
   {
       fflush(stdin);
       scanf("%s %s %s %s",name1,odev1,name2,odev2);
       scanf("%d %d",&x,&y);
       ans = x+y;
       if (ans%2==0)
       {
           if (strcmp(odev1,"PAR")==0)
           {
               printf("%s\n",name1);
           }
           if (strcmp(odev2,"PAR")==0)
           {
               printf("%s\n",name2);
           }
       }
       else
       {
           if (strcmp(odev1,"IMPAR")==0)
           {
               printf("%s\n",name1);
           }
           if (strcmp(odev2,"IMPAR")==0)
           {
               printf("%s\n",name2);
           }
       }
       i++;
   }
    return 0;
}
