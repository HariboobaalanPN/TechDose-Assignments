#include<stdio.h>
#include<string.h>
int largestSumContiguousSubArray(int arr[],int n){
    int sum=arr[0],max=arr[0];
    for(int i=1;i<n;i++){
        sum=arr[i]>(sum+arr[i])?arr[i]:(sum+arr[i]);
        max=max>sum?max:sum;
    }
    return max;
}
int main(){
	 int n;
	 printf("Enter number of elements in arr1:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
    printf("\nLargest sum in the Contiguous Sub Array is %d.", largestSumContiguousSubArray(arr,n));
}