#include<stdio.h>
int trapRainWater(int height[],int n) {
    if(n < 3){
        return 0;
    }
    int end = n-1;        
    int maxR[n];
    maxR[end]=height[end];
    for(int i=end-1;i>1;i--){
        maxR[i]=(height[i]>=maxR[i+1])?height[i]:maxR[i+1];
    }
    int leftMax=height[0];
    int volume=0;
    for(int i=1;i<end;i++) {
        int a=((leftMax<=maxR[i+1])?leftMax:maxR[i+1]);
        volume+= (a-height[i]>0)?a-height[i]:0;
        leftMax=leftMax>height[i]?leftMax:height[i];
    }
    
    return volume;
}
int main(){
	 int n;
	 printf("Enter number of elements:");
	 scanf("%d\n",&n);
	 int arr[n];
	 printf("\nEnter elements: ");
	 for(int i=0;i<n;i++)
	    scanf("%d ",&arr[i]);
	 printf("\n%d",trapRainWater(arr,n));
}