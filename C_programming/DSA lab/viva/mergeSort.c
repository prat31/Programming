#include<stdio.h>
#include<malloc.h>

void merge(int *arr1, int size1, int *arr2, int size2){
    int *temp = (int*)malloc((size1+size2)*sizeof(int));
    int i=0, j=0, k=0;
    while(i<size1&&j<size2)
        temp[k++]=arr1[i]<arr2[j]?arr1[i++]:arr2[j++];
    while(i<size1)
        temp[k++]=arr1[i++];
    while(j<size2)
        temp[k++]=arr2[j++];
    for(int i=0; i<size1+size2; i++){
        arr1[i]=temp[i];
    }
    return;
}
void mergeSort(int *arr, int size){
    if(size==1) return;
    else{
        int mid=size/2;
        mergeSort(arr, mid);
        mergeSort(arr+mid, size-mid);
        merge(arr, mid, arr+mid, size-mid);
    }
    return;
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
    mergeSort(arr, n);
    printf("The values in sorted order are : \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}