#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double x1,x2,root;
    scanf("%lf %lf %lf",&a, &b, &c);
    root = pow(b,2)-4*a*c;
    if (a == 0 || root < 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
 
            ///calculation
        x1 = (-b+sqrt(root))/(2*a);
        x2 = (-b-sqrt(root))/(2*a);
        //print output
        printf("R1 = %.5lf\n",x1);
        printf("R2 = %.5lf\n",x2);
 
    }
 
 
 
 
    return 0;
}
