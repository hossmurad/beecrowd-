#include<stdio.h>
int main()
{
    int H,Z,L;
 while(1)
 {

    scanf("%d %d %d",&H,&Z,&L);

    if (H>Z && H>L)
    {
        if (Z>L)
        {
            printf("zezinho\n");
        }
        else
        {
            printf("luisinho\n");
        }
    }
     if (Z>H && Z>L)
    {
        if (H>L)
        {
            printf("huguinho\n");
        }
        else
        {
           printf("luisinho\n");
        }
    }
   if(L>H && L>Z)
    {
        if(H>Z)
        {
            printf("huguinho");
        }
        else
        {
            printf("zezinho\n");
        }
    }
}
    return 0;
}
