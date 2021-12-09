#include <stdio.h>
int main()
{
    int arr[9]={5,9,4,6,3,7,1,2,8};
    int minimum=0,temp,n=9;
    
    for(int i=0;i<n-1;i++){
        minimum=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimum]){
                minimum=j;
            }
        }
        temp=arr[minimum];
        arr[minimum]=arr[i];
        arr[i]=temp;
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}


