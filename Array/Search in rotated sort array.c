#include<stdio.h>
#include<string.h>

int search(int n,int arr[n], int k) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int mid = (start + end) / 2;
        if (arr[mid] == k) return mid;
        
        if (arr[start] <= arr[mid]) {
            if (k >= arr[start] && k < arr[mid]) {
                end = mid - 1;
            } 
            else {
                start = mid + 1;
            }
        } 
        else {
            if (k > arr[mid] && k <= arr[end]) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }
    }
    return arr[start] == k ? start : -1;
}

int main(){
	 int n,k;
	 printf("Enter number of elements in arr1:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
    scanf("%d",&k);
    printf("%d ",search(n,arr,k));
    
	
}