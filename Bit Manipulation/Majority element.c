#include<stdio.h>
#include<string.h>

int majorityElement(int n,int arr[]){
    int major=arr[0],count=0;
    for (int i=1;i<n;i++){
		count=(major==arr[i])?count+1:count-1;
    }
    return major;
} 

int main(){
	 int n;
	 printf("Enter number of elements:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
	 printf("\nElement is %d.",majorityElement(n,arr));
}
