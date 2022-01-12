#include<stdio.h>

void countBits(int n){
    n++;
    int arr[n];
    arr[0]=0;
    for(int i=1;i<n;i++)
        arr[i]=(i&1)?arr[i>>1]+1:arr[i>>1];
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
} 



int main(){
	 int n;
	 printf("Enter number:");
	 scanf("%d",&n);
	 countBits(n);
	
}