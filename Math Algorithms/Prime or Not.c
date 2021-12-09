#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,f=1;
    scanf("%d",&n);
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            f=0;
            break;
        }
    }
    printf("%s",f?"It is a prime":"It is not a prime");
    return 0;
}
