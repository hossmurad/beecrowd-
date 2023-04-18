#include <stdio.h>

int main() {
    int n,x,y,i,j,sum;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d %d",&x,&y);

        if (x>y)
            {
              for (j=y+1;j<x;j++)
              {
                  if(j%2==1)
                  {
                      sum = sum+j;

                  }

              }
              printf("%d\n",sum);
            }
        else if(x<y)
             {
              for (j=x+1;j<y;j++)
              {
                  if(j%2==1)
                  {
                      sum = sum+j;
                  }

              }
              printf("%d\n",sum);
            }
            else
                {
                   printf("0\n");
                }


        }



    return 0;
}
