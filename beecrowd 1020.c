#include<stdio.h>
int main()
{
    int value;
    scanf("%d",&value);
    int y = value/365;
    int yr = value-(365*y);
    int m = yr/30;
    int mr = yr - (m*30);
    int d = mr;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
 
    return 0;
}
