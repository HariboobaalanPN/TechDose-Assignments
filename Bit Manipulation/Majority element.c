#include<stdio.h>
#include<string.h>
int majorityElement(int n,int arr[]){
    int f=0,major;
    for (int i=0;i<n;i++) {
        if (f==0){
            major=arr[i];
        }
		c=(major == arr[i])?c+1:c-1;
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