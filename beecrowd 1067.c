#include <stdio.h>
 
int main() {
 int  value;
 scanf("%d",&value);
 for (int i=0;i<=value;i++)
 {
     if(i%2!=0)
     {
         printf("%d\n",i);
     }
 }
 
    return 0;
}
