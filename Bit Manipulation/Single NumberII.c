#include<stdio.h>
#include<string.h>
int singleNumber(int n,int arr[]){
    int one=0,two=0;
	for(int i=0;i<n;i++)
	{
		one=(one^arr[i])&(~two);
		two=(two^arr[i])&(~one);
	}
	return one;
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
