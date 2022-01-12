#include <stdio.h>

void bucketsort(int a[],int n) 
{  
  int max=a[0];  
  for (int i=1;i<n;i++){  
    if (a[i]>max){
      max=a[i]; 
    }
  }
  int bucket[max], i;  
  for(int i=0;i<=max;i++)  
  {  
    bucket[i]=0;  
  }  
  for(int i=0;i<n;i++)  
  {  
    bucket[a[i]]++;  
  }  
  for(int i=0,j=0;i<=max;i++)  
  {  
    while(bucket[i]>0)  
    {  
      a[j++]=i;  
      bucket[i]--;  
    }  
  }  
}  

int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d\n",&n);
    int a[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    printf("Elements before sort:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    bucketsort(a,n);
    printf("\nElements after sorting:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}