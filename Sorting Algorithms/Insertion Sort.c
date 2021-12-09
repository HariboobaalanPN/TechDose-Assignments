#include <stdio.h>
void insertionSort(int *arr,int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int arr[]={5,9,3,2,4,1,5,4,6,3,7,1,2,8};
    int temp,n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(&arr[0],n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}