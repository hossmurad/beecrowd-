#include <stdio.h>

int main() {

    int value,even=0,odd=0,positive=0,negative=0;
    for (int i = 0;i<5;i++)
    {
        scanf("%d",&value);
        if(value%2==0) even++;
        if (value%2!=0) odd++;
        if(value>0) positive++;
        if (value<0) negative++;
    }
printf("%d valor(es) par(es)\n",even);
printf("%d valor(es) impar(es)\n",odd);
printf("%d valor(es) positivo(s)\n",positive);
printf("%d valor(es) negativo(s)\n",negative);

    return 0;
}
