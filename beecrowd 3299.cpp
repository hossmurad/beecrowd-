#include<iostream>
using namespace std;
bool isLucky(long long n)
{
    int p;
    while(n!=0){
    p = n%10;
    if(p==3){
        n = n/10;
        p = n%10;
        if (p==1){
            return true;
            break;
        }
    }
    n= n/10;
  }
  return false;
}
int main(){
long long x;
  cin>>x;
  if(isLucky(x)){
    cout<<x<<" es de Mala Suerte"<<"\n";
  }else{
      cout<<x<<" NO es de Mala Suerte"<<"\n";

  }
  return 0;
}
