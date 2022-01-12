#include<stdio.h>

int hammingDistance(int a, int b){
    int d = 0;
    for(int i=a^b;i>0;i&=(i-1)){
        d++;
    }
    return d;  
}   

int main(){
	 int a,b; 
	 printf("Enter positions: ");
	 scanf("%d %d",&a,&b);
	 printf("\nDistance is %d.",hammingDistance(a,b));
}