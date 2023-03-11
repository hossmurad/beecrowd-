#include <stdio.h>
 
int main() {
   int value ;
   scanf("%d",&value);
   int a= value/100;
   int b = value-(a*100);
   int c=b/50;
   int d=b-(c*50);
   int e= d/20;
   int f=d-(e*20);
   int g=f/10;
   int h =f-g*10;
   int i=h/5;
   int j= h-(i*5);
   int k= j/2;
   int l=j-(k*2);
   int m=l/1;
 
    printf("%d\n",value);
    printf("%d nota(s) de R$ 100,00\n",a);
    printf("%d nota(s) de R$ 50,00\n",c);
    printf("%d nota(s) de R$ 20,00\n",e);
    printf("%d nota(s) de R$ 10,00\n",g);
    printf("%d nota(s) de R$ 5,00\n",i);
    printf("%d nota(s) de R$ 2,00\n",k);
    printf("%d nota(s) de R$ 1,00\n",m);
 
    return 0;
}
