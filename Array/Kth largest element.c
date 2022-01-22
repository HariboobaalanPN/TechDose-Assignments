#include<stdio.h>
#include<string.h>
int partition(int arr[],int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            int t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    int t=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=t;
    return i+1;
}
void quickSort(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

int findKthLargest(int* nums, int numsSize, int k){
    quickSort(nums,0,numsSize-1);
    return nums[numsSize-k];
}


int main(){
	 int n,k;
	 printf("Enter number of elements:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
	 scanf("%d",&k);
	 printf("\n%d",findKthLargest(arr,n,k));
}
