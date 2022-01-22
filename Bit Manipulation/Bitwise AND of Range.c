#include<stdio.h>

int bitwiseAndofRange(int left, int right){
	int count=0;
	while (left!=right){
		left>>=1;
		right>>=1;
		count++;
	}
	return left<<count;
}


int main(){
	 int st,end;
	 printf("Enter start and end range:");
	 scanf("%d %d",&st,&end);
	 printf("\nBitwise AND from %d to %d  is %d",st,end,bitwiseAndofRange(st,end));
	
}
