#include<iostream>
using namespace std;
int main(){

    int n,a;
    cin>>n;
    if (n%2==0)
    {
      a = (n*n)/2;
      cout<<a<<" casas brancas e "<<a<<" casas pretas"<<"\n";
    }
    else
    {
      a = (n*n)/2;
      cout<<a+1<<" casas brancas e "<<a<<" casas pretas"<<"\n";
    }


    return 0;

}
