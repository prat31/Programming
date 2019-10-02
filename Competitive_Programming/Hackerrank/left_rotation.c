#include<stdio.h>

void left_rotate(int *arr, int d, int n){
    int rotate_count=d%n;
    if(rotate_count==0){
        return;
    }
    int temp[rotate_count];
    for(int i=0; i<rotate_count; i++){
        temp[i]=arr[i];
    }
    int j=0;
    for(int i=rotate_count; i<n; i++){
        arr[j++]=arr[i];
    }
    j=0;
    for(int i=(n-rotate_count); i<n; i++){
        arr[i]=temp[j++];
    }
    return ;
}


int main(){
    int n, d;
    scanf("%d %d", &n, &d);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    left_rotate(arr, d, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}