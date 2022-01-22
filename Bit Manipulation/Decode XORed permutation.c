#include<stdio.h>
#include<string.h>
void decode(int n,int encoded[]){
    int arr[++n],index=0;
    int xor1=0,xor2=0;
    for(int i=1;i<=n;i++) {
        xor1^=i;
    }
    for(int i=1;i<n;i+=2){
        xor2^=encoded[i];
    }
    arr[index++]=xor1^xor2;
    for(int i=0;i<n-1;i++){
        arr[index]=encoded[i]^arr[index-1];
        index++;
    }
    
    for(int i=0;i<n;i++){
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
	 printf("\nEncoded array: ");
	 decode(n,arr);
	
}
