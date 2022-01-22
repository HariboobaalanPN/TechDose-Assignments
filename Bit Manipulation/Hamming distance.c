#include<stdio.h>

int hammingDistance(int a, int b){
    int count=0;
    while (x>0 || y>0){
        count+=(x&1)^(y&1);
        x>>=1;
        y>>=1;
    }
    return count;  
}   

int main(){
	 int a,b; 
	 printf("Enter positions: ");
	 scanf("%d %d",&a,&b);
	 printf("\nDistance is %d.",hammingDistance(a,b));
}
