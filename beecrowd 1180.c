#include<stdio.h>
int main()
{
    int n,i,min,position;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);

    }
    min = x[0];
    for(i=1;i<n;i++)
    {
        if(min>x[i])
        {
            min = x[i];
            position = i;
        }


    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",position);
    return 0;
}
