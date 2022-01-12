#include<stdio.h>
#include<string.h>
void twoSum(int n,int arr[],int target){
    int I,J;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])==target)
            {
                I=i;
                J=j;
                break;
            }
        }
    }
    printf("\n%d %d",I,J);
} 


int main(){
	 int n,target;
	 printf("Enter number of elements:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
	 printf("\nEnter target sum: ");
	 scanf("%d",&target);
	 twoSum(n,arr,target);
	
}