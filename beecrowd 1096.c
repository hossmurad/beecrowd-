#include <stdio.h>

int main() {

 int i,j,k;
 for (i=1;i<=9;i+=2)
 {
     j=7;
     for(k=1;k<=3;k++)
     {

       printf("I=%d ",i);
       printf("J=%d\n",j);
       j--;
     }

 }
    return 0;
}
