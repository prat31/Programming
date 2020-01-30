#include<stdio.h>

int main(){
    int n;
    printf("Enter number of values to enter : ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter value %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                arr[min]=arr[min]+arr[j];
                arr[j]=arr[min]-arr[j];
                arr[min]=arr[min]-arr[j];
            }
        }
    }
    printf("The values in sorted order are : \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}