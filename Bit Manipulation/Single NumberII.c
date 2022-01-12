#include<stdio.h>
#include<string.h>
int singleNumber(int n,int arr[]){
    int one=0,two=0,three;
	for(int i=0;i<n;i++)
	{
		two |= (one & arr[i]);
		one ^= arr[i];
		three = (two & one);
		if(three != 0)
		{
			one ^= three;
			two ^= three;
		}
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