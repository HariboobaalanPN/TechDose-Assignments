#include<stdio.h>
#include<string.h>
void decode(int n,int a[]){
    int arr[n+1];
    memset(arr,0,n+1);
    for(int i=0;i<=n+1;i++) {
        arr[0]^=i;
        if(i<n && i%2==1){
            arr[0]^=a[i];
        }
    }
    for(int i=1;i<n+1;i++){
        arr[i]^=arr[i-1]^a[i-1];
    }
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
} 

int main(){
	 int n;
	 printf("Enter number of elements:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
	 decode(n,arr);
	
}