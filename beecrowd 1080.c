#include<stdio.h>

int main()
{
    int i,j = 0,p,a[100];
    for (i = 0;i < 100;i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0;i < 100;i++){
            if(a[i] > j){
                j = arr[i];
                p = i+1;
            }
    }
    printf("%d\n", j);
    printf("%d\n", p);

    return 0;
}
