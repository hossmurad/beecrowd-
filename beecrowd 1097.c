#include <stdio.h>

int main() {

 int i,j,k;
 for (i=1;i<=9;i+=2)
 {

     for(k=1;k<=3;k++)
     {

       if(i==1 && k==1)
       {
           j =7;
       }
       if(i==3 && k==1)
       {
           j =9;
       }
       if(i==5 && k==1)
       {
           j =11;
       }
        if(i==7 && k==1)
       {
           j =13;
       }
        if(i==9 && k==1)
       {
           j =15;
       }

       printf("I=%d ",i);
       printf("J=%d\n",j);
       j--;
     }

 }
    return 0;
}
