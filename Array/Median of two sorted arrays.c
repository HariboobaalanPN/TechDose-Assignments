#include <stdio.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int i=0,ind=0,j=0,n=nums1Size+nums2Size;
    int a[n];
    while(i<nums1Size && j<nums2Size){
        a[ind++]=(nums1[i]<=nums2[j])?nums1[i++]:nums2[j++];
    }
    while(i<nums1Size){
        a[ind++]=nums1[i++];
    }
    while(j<nums2Size){
        a[ind++]=nums2[j++];
    }
    return n&1?a[n/2]:((a[n/2]+a[(n/2)-1])/2.0);
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
	 printf("\n%lf",findMedianSortedArrays(arr1,n1,arr2,n2));
	
}
