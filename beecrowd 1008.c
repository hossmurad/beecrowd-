#include <stdio.h>

int main() {

int n,h;
double s;
scanf("%d %d %lf",&n,&h,&s);
double ans = h*s;
printf("NUMBER = %d\n",n);
printf("SALARY = U$ %.2lf\n",ans);


return 0;
}
