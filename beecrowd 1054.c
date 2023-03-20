#include <stdio.h>
 
int main() {
 
    int count = 0;
    float value,ave,sum=0;
    for(int i=0;i<=5;i++)
    {
        scanf("%f",&value);
        if(value>0)
        {
            count++;
            sum = sum+value;
            
        }
    }
    ave = sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",ave);
 
    return 0;
}
