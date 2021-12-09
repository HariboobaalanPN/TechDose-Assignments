#include <stdio.h>
#include<stdbool.h>

void swap(int *a,int *b){
    (*a)^=(*b);
    (*b)^=(*a);
    (*a)^=(*b);
}

int main()
{
    int arr[9]={5,9,4,6,3,7,1,2,8};
    int temp,n=9;
    
    for(int i=0;i<n-1;i++){
        bool fswap=false;
        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                fswap=true;
            }
        }
        if(fswap==false)break;
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}

/*
#include <stdio.h>

int main()
{
    int a[]={10,5,2054,23,0,2,99,51};
    int n=sizeof(a)/sizeof(a[0]),t;
    printf("N=%d\n",n);
    for (int i = 0; i < n-1; i++){     
        printf("\ni= %d\n",i);
       for (int j = 0; j < n-i-1; j++){
           printf("\tj=%d j<%d\n\t\t",j,n-i-1);
           if (a[j] > a[j+1]){
               t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                printf("swapping ( %d , %d )\n\t\t\t",a[j+1],a[j]);
           }
           for(int x=0;x<n;x++){
                printf("%d ",a[x]);
            }
            printf("\n");
       }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

*/
