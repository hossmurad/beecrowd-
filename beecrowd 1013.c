#include <stdio.h>
 
int main() {
 
    int x,y,z;
    int ans;
    scanf ("%d %d %d ",&x,&y,&z);
    if(x>y && x>z)
    {
       ans = x; 
    }
    else if(y>z)
    {
        ans = y;
    }
    else
    {
        ans = z;
    }
    printf("%d eh o maior\n",ans);
 
    return 0;
}
