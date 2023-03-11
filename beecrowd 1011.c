#include <stdio.h>
#include <math.h>
int main() {
 
    double r;
    scanf("%lf",&r);
    double ans = (4.0/3) * 3.14159 * pow(r,3);
    printf("VOLUME = %.3lf\n",ans);
 
    return 0;
}
