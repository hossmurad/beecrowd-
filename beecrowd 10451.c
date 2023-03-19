#include <stdio.h>
 
int main() {
 
    float value,ans,r,i1;
    scanf("%f",&value);
    if( value>0.00 && value<=2000.00 )
    {
        printf("Isento\n");
    }
    else if(value>2000.00 && value <= 3000.00)
    {
        r = value - 2000.00;
        ans = r*0.08;
         printf("R$ %.2f\n",ans);
    }
    else if ( value >3000.00 && value <=4500.00)
    {
        r = value - 3000.00;
         i1 = r*0.18; 
        ans = 80+i1;
         printf("R$ %.2f\n",ans);
       
   }
   else 
   {
    r = value - 4500;
     i1= r*0.28;
    ans = 270+80+i1;
     printf("R$ %.2f\n",ans);
   }
  
 
    return 0;
}
