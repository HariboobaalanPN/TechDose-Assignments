#include<stdio.h>
#include<string.h>
int kThlargest(int n,int arr[n],int k) {
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    return arr[n-k];
}


int main(){
	 int n,k;
	 printf("Enter number of elements:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
	 scanf("%d",&k);
	 printf("\n%d",kThlargest(n,arr,k));
	
}