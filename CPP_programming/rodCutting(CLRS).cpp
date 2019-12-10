#include<bits/stdc++.h>

using namespace std;

int max(int a, int b)   { return(a>b?a:b);  }


// This is the naive brute force way to find the solution
/*
int cutRod(int price[], int n){
    if (n <= 0) 
     return 0; 
   int max_val = INT_MIN; 
  
   for (int i = 0; i<n; i++) 
        max_val = max(max_val, price[i] + cutRod(price, n-i-1)); 
  
   return max_val; 
}*/

//This is the efficient DP way to do it



int main(){
    int arr[]={1, 1, 1, 1, 1, 1, 1, 90};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum obtainable value is : "<<    cutRod(arr, size);
    getchar();
    return 0;
}
