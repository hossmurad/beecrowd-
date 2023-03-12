#include<stdio.h>
int main()
{
for(int ip=1;ip<10;ip++)
{


    double value;
    scanf("%lf",&value);
    ///notas
    int a = value/100;
    int b = value - (100*a);
    int c = b/50;
    int d = b-(c*50);
    int e = d/20;
    int f = d-e*20;
    int g = f/10;
    int h = f-g*10;
    int i = h/5;
    int j = h-i*5;
    int k = j/2;
    int l =j-k*2;
   ///med
    int o = l/1;
    int p = l-o*1;///clr
    float rem = value-((a*100)+(c*50)+(e*20)+(g*10)+(i*5)+(k*2)+(o*1));//.73
    printf("%f\n",rem);
    int q = rem/0.50; ///1
    float r = rem-q*0.50;///.73-.05=0.23
    int s = r/0.25;//1
    float t = r-s*0.25;
    int u = t/0.10;
    float v = t-u*0.10;
    int w = v/0.05;
    float x = v-w*0.05;
    int y = x/.01;



    ///print values of notes

     printf("NOTAS:\n");
     printf("%d nota(s) de R$ 100.00\n",a);
     printf("%d nota(s) de R$ 50.00\n",c);
     printf("%d nota(s) de R$ 20.00\n",e);
     printf("%d nota(s) de R$ 10.00\n",g);
     printf("%d nota(s) de R$ 5.00\n",i);
     printf("%d nota(s) de R$ 2.00\n",k);


   ///print moedas
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",o);
    printf("%d moeda(s) de R$ 0.50\n",q);
    printf("%d moeda(s) de R$ 0.25\n",s);
    printf("%d moeda(s) de R$ 0.10\n",u);
    printf("%d moeda(s) de R$ 0.05\n",w);
    printf("%d moeda(s) de R$ 0.01\n",y);




}
    return 0;
}

