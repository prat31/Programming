#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int *count=(int*)calloc(101, sizeof(int));

    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }
    for(int i=0; i<=101; i++){
        count[i]=count[i]/2;
    }
    int sum=0;
    for(int i=0; i<=101; i++){
        sum=sum+count[i];
    }
    printf("%d", sum);
    return 0;
}