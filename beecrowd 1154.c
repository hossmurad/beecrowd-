#include<stdio.h>
int main()
{
  int i,n;
  double sum=0.00,avg,count=0.00;
  while(1)
  {
      scanf("%d",&n);
      if(n<0)
      {
          break;
      }
      else
      {
          sum = sum + n;
          count++;
      }
  }
  avg = sum/count;
  printf("%.2lf\n",avg);
    return 0;
}
