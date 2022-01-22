#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],ind=0;
    while(n%2==0){        // First Try to divide it by 2  , Then only odd number will remain
        n/=2;
        a[ind++]=2;
    }
    for(int i=3;i<=sqrt(n);i=i+2){  // Only odd numbers must be as factors, so consider 3 as start and increment by 2 
        while(n%i==0){
            n/=i;
            a[ind++]=i;
        }
    }
    if(n>2){           // If any value remains then it is also a prime factor
        a[ind++]=n;
    }
    for(int i=0;i<ind;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
