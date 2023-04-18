#include<stdio.h>
int main()
{
   int pass = 2002;
   int inpass;
   while(1)
   {
     scanf("%d",&inpass);
     if (pass==inpass)
     {
         printf("Acesso Permitido\n");
         break;
     }
     else
     {
         printf("Senha Invalida\n");
     }
   }
    return 0;
}
