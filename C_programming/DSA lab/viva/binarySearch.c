#include<stdio.h>

int binarySearch(int *arr, int lower, int upper, int toSearch){
    while(lower<=upper){
        int middle = lower+ (upper-lower)/2;
        if(arr[middle]==toSearch)   return middle;
        if(arr[middle]<toSearch)    lower = middle+1;
        if(arr[middle]>toSearch)    upper = middle-1;
    }
    return -1;
}


int main(){
    int n;
    printf("Enter number of values to enter : ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter value %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    int toSearch;
    printf("Enter value to search : ");
    scanf("%d", &toSearch);
    int lower = 0, upper = n-1, mid;
    int result = binarySearch(arr, lower, upper, toSearch);
    if(result==-1)
        printf("The value %d is not present in the array.", toSearch);
    else    
        printf("The value %d is present at index %d", toSearch, result);
    return 0;
}