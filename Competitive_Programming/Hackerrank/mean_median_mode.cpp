#include<stdio.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float mean(int *arr, int n){
    for(int i=1; i<n; i++){
        arr[0]=arr[0]+arr[i];
    }
     return (arr[0]/n);
}

float median(int *arr, int n){
    sort(arr, arr+n);
    if(n%2!=0){
        return arr[n/2];
    }
    else{
        return (arr[n/2]+arr[(n/2)-1]/2);
    }
}

int mode(int *arr, int n){
    int max=*max_element(arr, arr+n);
    int count[max+1];
    for(int i=0; i<max+1; i++) count[i]=0;
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }
    max=count[0];
    int mode_result=0;
    for(int i=0; i<max+1; i++){
        if(count[i]>=max){
            if(count[i]==max){
                if(i<mode_result){
                    mode_result=i;
                }
            }
            max=count[i];
            mode_result=i;
        }
    }
    return mode_result;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%.1f\n%.1f\n%d", mean(arr, n), median(arr, n), mode(arr, n));
    return 0;
}
