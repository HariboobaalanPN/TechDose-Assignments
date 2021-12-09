#include <stdio.h>

int getMax(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

void countingSort(int arr[], int n, int expo){
    int output[n]; // output contains arr size number of elements
    int count[10]={0};   // here range is 10 bcz (here sorting is based on digits, so digits can be only from 0 - 9)
    for(int i=0;i<n;i++){
        count[(arr[i]/expo)%10]++;   // increment count array based on digit places (unit,tens,hundreds..)
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    for(int i = n - 1; i >= 0; i--){
        output[--(count[(arr[i]/expo)%10])]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
    
}

void radixSort(int arr[],int n){
    int maxnum=getMax(arr,n); // returns maxnum from arr
    for(int expo=1; (maxnum/expo)>0; expo *=10){  // runs for size of maxnum times 
        countingSort(arr,n,expo);
    }
}

int main()
{
    int arr[]={325 ,45 ,21 ,65215, 63};
    int temp,n=sizeof(arr)/sizeof(arr[0]);
    radixSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}



