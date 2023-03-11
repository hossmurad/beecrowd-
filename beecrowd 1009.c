#include <stdio.h>
 
int main() {
    char name[50];
    double salary,sold;
    scanf("%s %lf %lf",&name,&salary,&sold);
    double bonus = sold*0.15;
    double total = bonus + salary;
    printf("TOTAL = R$ %.2lf\n",total);
 
 
 
 
 
 
    return 0;
}
