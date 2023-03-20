#include <stdio.h>

int main() {

    int value,odd;
    scanf("%d",&value);
    if(value%2==0) value++;
    for (int i =1;i<=6;i++)
    {


       printf("%d\n",value);
       value+=2;

    }

    return 0;
}
