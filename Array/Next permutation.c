#include<stdio.h>
#include<string.h>

void swap(int n,int arr[n], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void reverse(int n,int arr[n], int start) {
    int i = start, j = n - 1;
    while (i < j) {
        swap(n,arr, i, j);
        i++;
        j--;
    }
}
void nextPermutation(int n,int arr[n]) {
    int i = n - 2;
    while (i >= 0 && arr[i + 1] <= arr[i]) {
        i--;
    }
    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i]) {
            j--;
        }
        swap(n,arr, i, j);
    }
    reverse(n,arr, i + 1);
}


int main(){
	 int n;
	 printf("Enter number of elements in arr1:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
    nextPermutation(n,arr);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
	
}