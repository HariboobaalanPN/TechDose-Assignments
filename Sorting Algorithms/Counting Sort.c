#include <stdio.h>
#include<string.h>
void countingSort(int *arr,int n){
    int RANGE=9 +1;   // 9 because 9 is the maximum range element here 
    int count[RANGE];
    memset(count,0,sizeof(count));
    int output[n];
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<RANGE;i++){
        count[i]+=count[i-1];
    }
    for(int i=0;i<n;i++){
        output[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",output[i]);
    }
    printf("\n");
}

int main()
{
    int arr[]={5,9,3,2,4,1,5,4,6,1,7,5,6,3,2,1,4,6,3,7,1,2,8};
    int temp,n=sizeof(arr)/sizeof(arr[0]);
    countingSort(&arr[0],n);
    
    return 0;
}