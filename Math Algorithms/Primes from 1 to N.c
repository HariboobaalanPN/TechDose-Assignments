#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    memset(a,0,sizeof(int)*(n+1));
    a[0]=a[1]=1;
    for(int i=2;i<sqrt(n);i++){
        if(a[i]==0){
            for(int j=2;j*i<=n;j++){
                a[j*i]=1;
            }
        }
    }
    for(int i=0;i<n+1;i++){
        if(a[i]==0){
            printf("%d ",i);
        }
    }
    return 0;
}
