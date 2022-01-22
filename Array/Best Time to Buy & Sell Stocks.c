#include<stdio.h>
#include<limits.h>
int maxProfit(int* prices, int pricesSize){
        int min = INT_MAX;
        int profit = 0;
        for (int i = 0; i < pricesSize; i++) {
            if (prices[i] < min)
                min = prices[i];
            else if (prices[i] - min > profit)
                profit = prices[i] - min;
        }
        return profit;
}

int main(){
	 int n;
	 printf("Enter number of elements:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
	 printf("\n%d",maxProfit(arr,n));
}