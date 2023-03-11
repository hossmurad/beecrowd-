#include <stdio.h>

int main() {

 int start,stop,ans;
 scanf("%d %d",&start,&stop);

 if(start==stop)
 {
     ans = 24-start+stop;
 }
 else if(stop>start)
 {
     ans = stop-start;
 }
 else
 {
      ans = 24-start+stop;
 }
  printf("O JOGO DUROU %d HORA(S)\n",ans);
    return 0;
}
