#include<stdio.h>
int main()
{
    int x,i,j,k=0;
    int N[1000];
    scanf("%d",&x);

    for (i=0;i<1000;i++)
    {

            N[i]=k;
            printf("N[%d] = %d\n",i,k);
            k++;
            if(k>=x)
            {
                k=0;
            }



    }

    return 0;
}
