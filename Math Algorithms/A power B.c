#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a,b;    // a^b
    scanf("%d %d",&a,&b);
    long long res=1;
    while(b>0){
        if(b%2==1){
            res*=a;
        }
        a*=a;
        b/=2;
    }
    printf("%lld",res);
    return 0;
}
