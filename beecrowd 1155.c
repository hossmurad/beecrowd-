#include<stdio.h>
int main()
{
  double sum=0.00,i;
  for (i=1;i<=100;i++)
  {
      sum = sum+ (1/i);
  }
  printf("%.2lf\n",sum);
    return 0;
}
