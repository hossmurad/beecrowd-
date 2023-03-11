#include <stdio.h>
int main()
 {
     double N1,N2,N3,N4;
     ///input four score 
     scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
     ///average calculation
     double ans = (N1*2+N2*3+N3*4+N4*1)/10;
     ///print average 
     printf("Media: %.1lf\n",ans);
     if(ans >= 7.0)
     {
         printf("Aluno aprovado.\n");
     }
     else if(ans < 5)
     {
         printf("Aluno reprovado.\n");
     }
    else 
     {
        printf("Aluno em exame.\n");
        double num;
        scanf("%lf",&num);
        printf("Nota do exame: %.1lf\n",num);
        double a = (ans+num) / 2;
        if ( a >= 5.0)
        {
            printf("Aluno aprovado.\n");
 
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
 
        printf("Media final: %.1lf\n",a);
     }
 
 
    return 0;
}
