#include<stdio.h>

int maxDiff(int n,int a[n]){
    if(n<2){
        return 0;
    }
    // Sorting
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                a[i]^=a[j];
                a[j]^=a[i];
                a[i]^=a[j];
            }
        }
    }
    int max=0;
    for(int i=0;i<n-1;i++){
        int diff=a[i+1]-a[i];
        if(diff>max){
            max=diff;
        }
    }
    return max;
}

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d\n",&n);
    int a[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    printf("\nMaximum difference is %d.",maxDiff(n,a));
    return 0;
}