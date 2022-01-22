#include<stdio.h>

void countBits(int n){
    int arr[n+1];
    arr[0]=0;
    
    for(int i=1;i<=n;i++){
        arr[i]=arr[n/2]+i%2;
    }
    
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
} 



int main(){
	 int n;
	 printf("Enter number:");
	 scanf("%d",&n);
	 printf("\nCountin Bits:   ");
	 countBits(n);
	
}
