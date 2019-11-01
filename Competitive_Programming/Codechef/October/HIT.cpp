#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int test_case;
    cin>>test_case;
    int n;
    while(test_case--){
        cin>>n;
        int arr[n];
        for(auto i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr+n);
        int first=n/4, second=first+first, third=first+first+first;
        if(arr[first]==arr[first-1]||arr[second]==arr[second-1]||arr[third]==arr[third-1]){
            cout<<"-1"<<endl;
        }
        else{
            cout<<arr[first]<<" "<<arr[second]<<" "<<arr[third]<<endl;
        }
    }
        return 0;
}