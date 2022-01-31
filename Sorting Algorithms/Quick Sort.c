#include <stdio.h>
int partition(int arr[], int low, int high){
    int pivot=arr[high];
    int i=low-1;
    for (int j=low;j<high;j++)  
    {  
        if (arr[j]<pivot)  
        {  
            i++;
            int t = arr[i];  
            arr[i] = arr[j];  
            arr[j] = t;  
        }  
    }  
    int t = arr[i+1];  
    arr[i+1] = arr[high];  
    arr[high] = t;
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int j=partition(arr,low,high);
        quickSort(arr,low,j-1);
        quickSort(arr,j+1,high);
    }
}

int main()
{
    int arr[]={5,9,3,2,4,1,5,4,6,3,7,1,2,8};
    int temp,n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
//  QUICK SORT - RANDOMIZING PIVOT ELEMENT
/*
#include<stdio.h> 
int partition(int arr[],int left, int right) { 
    int pivotValue = arr[left + (right - left) / 2]; 
    while(1) { 
        while(arr[left]<pivotValue) { 
            left++;
        } 
        while(arr[right]>pivotValue) { 
            right--; 
        } 
        if(left>=right) { 
            return right; 
        } 
        int temp = arr[left]; 
        arr[left] = arr[right]; 
        arr[right] = temp; 
        left++; 
        right--; 
    } 
}
void sort(int arr[],int from, int to) { 
    if(from < to) { 
        int pivot = partition(arr,from,to); 
        sort(arr,from,pivot-1); 
        sort(arr,pivot+1,to); 
    } 
} 
int main() { 
    int listsize; 
    scanf("%d",&listsize); 
    int values[listsize]; 
    int index; 
    for(index=0; index<listsize; index++) { 
        scanf("%d",&values[index]); 
    } 
    sort(values,0,listsize-1); 
    for(index=0; index<listsize; index++) { 
        printf("%d ",values[index]); 
    }
} 

*/
