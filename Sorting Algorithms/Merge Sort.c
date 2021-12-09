#include <stdio.h>
#include<stdbool.h>

void merge(int *arr, int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;
  
    int L[n1], R[n2];
  
    for (i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
  
    i = 0; 
    j = 0; 
    k = low; 
    while (i < n1 && j < n2) {
        arr[k++]=(L[i]<=R[j])?L[i++]:R[j++];
    }
    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(int *arr, int low, int high)
{
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(&arr[0], low, mid);
        mergeSort(&arr[0], mid + 1, high);
  
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[9]={5,9,4,6,3,7,1,2,8};
    int temp,n=9;
    
    mergeSort(&arr[0],0,n-1);
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}