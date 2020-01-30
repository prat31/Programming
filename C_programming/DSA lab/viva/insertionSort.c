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
    for(int i=1; i<n; i++){
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            arr[j-1] = arr[j-1]+arr[j];
            arr[j] = arr[j-1]-arr[j];
            arr[j-1] = arr[j-1]-arr[j];
            j--;
        }
    }
    printf("The values in sorted order are : \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}