#include<stdio.h>
#include<string.h>
int median(int n1,int arr1[n1],int n2,int arr2[n2]) {
    int l=n1+n2;
    int res[l],i,j,k;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            res[k]=arr1[i];
            i++;
        }
        else
        {
            res[k]=arr2[j];
            j++;
        }
        k++;
    }
    if(i>=n1)
    {
        while(j<n2)
        {
            res[k]=arr2[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<n1)
        {
            res[k]=arr1[i];
            i++;
            k++;
        }
    }
    double sum=0;
    for(int d=0;d<l;d++)
        printf("%d ",res[d]);
    if(l%2==0)
    {
        int mid=l/2;
        sum=(double)(res[mid]+res[mid-1])/2;
    }
    else
    {
        sum=res[l/2];
    }
    return sum;
}


int main(){
	 int n1,n2;
	 printf("Enter number of elements in arr1:");
	 scanf("%d\n",&n1);
	 int arr1[n1];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n1;i++)
	    scanf("%d ",&arr1[i]);
	    
	 printf("Enter number of elements in arr2:");
	 scanf("%d\n",&n2);
	 int arr2[n2];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n2;i++)
	    scanf("%d ",&arr2[i]);
	 
	 printf("\n%d",median(n1,arr1,n2,arr2));
	
}