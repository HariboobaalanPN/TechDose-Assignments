#include<stdio.h

int bitwiseAndofRange(int a, int b){
	while (a != b) {
        b &= (b - 1);
        while (a > b) {
            a &= (a - 1);
        }
    }
    return b;
}


int main(){
	 int st,end;
	 printf("Enter start and end range:");
	 scanf("%d %d",&st,&end);
	 printf("Bitwise AND from %d to %d  is %d",st,end,bitwiseAndofRange(st,end));
	
}