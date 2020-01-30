#include<stdio.h>

void linearSearch(int *arr, int toSearch){
    int found = 0;
    for(int i=0; i<sizeof(arr); i++){
        if(arr[i]==toSearch){
            printf("The value %d is found at index %d.", toSearch, i);
            found = 1;
        }
    }
    if(found == 0){
        printf("The value %d is not present in the array.", toSearch);
    }
    return ;
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
    linearSearch(arr, toSearch);
    return 0;
}