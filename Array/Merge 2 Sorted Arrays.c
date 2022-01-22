#include<stdio.h>
#include<stdlib.h>
int* merge(int n1,int a[n1], int n2, int b[n2]){
    int *res=malloc(sizeof(int)*(n1+n2));
    int i,j,k;
    i = 0; 
    j = 0; 
    k = 0; 
    while (i < n1 && j < n2) {
        res[k++]=(a[i]<=b[j])?a[i++]:b[j++];
    }
    while (i < n1) {
        res[k++] = a[i++];
    }
    while (j < n2) {
        res[k++] = b[j++];
    }
    
    return res;
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
	 int *res=merge(n1,arr1,n2,arr2);
	 printf("\nAfter Merge:\n");
	 for(int i=0;i<n1+n2;i++)
    	 printf("%d ",res[i]);
	
}