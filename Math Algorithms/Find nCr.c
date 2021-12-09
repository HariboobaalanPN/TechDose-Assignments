#include <stdio.h>

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b%a,a);
}
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    long long int p=1,k=1;
    if((n-r)<r){   // nCr=nC(n-r)
        r=n-r;
    }
    if(r!=0){        
        while(r){
            p*=n;
            k*=r;
            int gcdVal=gcd(p,k);
            p/=gcdVal;
            k/=gcdVal;
            n--;
            r--;
        }
    }
    printf("%lld ",p/k);
    return 0;
}
