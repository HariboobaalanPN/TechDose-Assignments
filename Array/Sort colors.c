#include<stdio.h>
#include<string.h>
void sortColors(int n,int nums[n]) {
    int max=nums[0];
    for(int i=0;i<n;i++)
    {
        if(nums[i]>max)
            max=nums[i];
    }
    int count[max+1];
    for(int i=0;i<=max;i++){
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[nums[i]]++;
    }
    int b[n];
    for(int i=1;i<=max;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        b[--count[nums[i]]]=nums[i];
    }
    for(int i=0;i<n;i++)
    {
        nums[i]=b[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",nums[i]);
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
    sortColors(n,arr);
	
}