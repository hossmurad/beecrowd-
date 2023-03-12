#include<stdio.h>
int main()
{



   int starth,startm,stoph,stopm;
   int h,m;
   scanf("%d %d %d %d",&starth,&startm,&stoph,&stopm);
   if (starth==stoph)
   {
      h = 24+(starth-stoph );
      if(stopm>startm)
      {
          m = stopm-startm;
      }
      else if (startm==stopm)
      {
          m = startm-stopm;
      }
      else
      {
          m=startm-stopm;
          int a= (60*h)-m;//(60*2)-1=119
      h =a/60;//1
      int b =a-(h*60);//59
      m = b;
      }


   }
   else if(stoph>=starth)
   {
       h = stoph-starth;
       if(stopm>startm)
      {
          m = stopm-startm;
      }
      else if (startm==stopm)
      {
          m = startm-stopm;
      }
      else
      {
          m=startm-stopm;
          int a= (60*h)-m;//(60*2)-1=119
      h =a/60;//1
      int b =a-(h*60);//59
      m = b;
      }
   }
   else
   {
       h = (24-starth)+stopm;
       if(stopm>startm)
      {
          m = stopm-startm;
      }
      else if (startm==stopm)
      {
          m = startm-stopm;
      }
      else
      {
          m=startm-stopm;
          int a= (60*h)-m;//(60*2)-1=119
      h =a/60;//1
      int b =a-(h*60);//59
      m = b;
      }
   }
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);




    return 0;
}

