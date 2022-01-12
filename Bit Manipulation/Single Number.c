#include<stdio.h>
#include<string.h>
int singleNumber(int n,int arr[]){
    int num=0;
    for(int i=0;i<n;i++)
        num^=arr[i];
    return num;
} 


int main(){
	 int n;
	 printf("Enter number of elements:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
	 printf("\nElement is %d.",singleNumber(n,arr));
	
}