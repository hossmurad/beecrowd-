#include <stdio.h>
 
int main() {
 
    int x;
    double y;
    scanf("%d %lf",&x,&y);
    double ans = x/y;
    printf("%.3lf km/l\n",ans);
 
    return 0;
}
