#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long int res=1;
    for(int i=2;i<=n;i++){
        res*=(4*i -2);
        res/=(i+1);
    }
    printf("%lld ",res);
    return 0;
}
