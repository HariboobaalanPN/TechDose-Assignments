#include<stdio.h>
#include<string.h>
void swap(int *a,int *b){
    int t=(*a);
    (*a)=(*b);
    (*b)=t;
}
void sortColors(int* nums, int numsSize){
    if(numsSize>1){
        int low=0;
        int high=numsSize-1;
        int mid=0;
        while(mid<=high){
            switch(nums[mid]){
                case 0: swap(&nums[low++],&nums[mid++]);
                    break;
                case 1: mid++;
                    break;
                case 2: swap(&nums[mid],&nums[high--]);
                    break;
                default:;
            }
        }
    }
}


int main(){
	 int n;
	 printf("Enter number of elements in arr1:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
    sortColors(arr,n);
    printf("\nColors after sort:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
