#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool linearSearch(vector<int> &arr, int n, int value){
    for(int i=n; i>=0; i--){
        if(arr[i]==value)   return true;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
    cin>>testCases;
    int N;
    while(testCases--){
        vector<int> arr;
        cin>>N;
        for(int i=0; i<N; i++){
            if(i==0||i==1)  arr.push_back(0);
            else{
                if(linearSearch(arr, arr.size()-2, arr[arr.size()-1])){
                    for(int i=arr.size()-2; i>=0; i--){
                        if(arr[i]==arr[arr.size()-1]){
                            arr.push_back(arr.size()-i-1);
                            break;
                        }
                    }
                }
                else{
                    arr.push_back(0);
                }
            }
        }
        int result=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==arr[arr.size()-1])   result++;
        }
        cout<<result<<endl;
        // arr.clear();
    }
    return 0;
}