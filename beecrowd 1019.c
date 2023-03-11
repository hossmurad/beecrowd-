#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int h = N/3600;
    int hr = N-(h*3600);
    int m =hr/60;
    int mr =hr-(m*60);
    int s = mr;
    printf("%d:%d:%d\n",h,m,s);
 
 
    return 0;
}
