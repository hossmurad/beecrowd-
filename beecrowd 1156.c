#include<stdio.h>
int main()
{
  double sum=0.00,i,c,j=1.00;
  for (i=1;i<=39;i+=2)
  {

      c = i/j;
      sum = sum+c;
      j= j*2;
    
  }
  printf("%.2lf\n",sum);
    return 0;
}
