#include<stdio.h>

int arr[10]={1,1,2,6,24,120,720,5040,40320,362880};
int main(){
    int n;
    printf("This is program to check whether a number is a factorion or not.\n");
    printf("Enter a number : ");
    scanf("%d", &n);
    int tmp=n;
    int num, sum=0;
    while(n>0){
        num=n%10;
        sum=sum+arr[num];
    //    printf("\n%d", sum);
        n=n/10;
    }
    if(sum==tmp){
        printf("\n%d is a factorion.", tmp);
    }

    else{
        printf("\n%d is not a factorion.", tmp);
    }
}