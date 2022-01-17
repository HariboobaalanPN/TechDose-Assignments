#include<stdio.h>
#include<string.h>
int maxProfit(int n,int prices[n]) {
    int c = 0, max = 0;
    for(int i = 1; i < n; i++) {
        c += prices[i] - prices[i-1];
        c = c>0?c:0;
        max = c>max?c:max;
    }
    return max;
}


int main(){
	 int n,target;
	 printf("Enter number of elements:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
	 printf("\n%d",maxProfit(n,arr));
	
}