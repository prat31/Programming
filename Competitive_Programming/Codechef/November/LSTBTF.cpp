#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool doesContainZero(int *arr, int size){
    for(auto i=0; i<size; i++){
        if(arr[i]==0)   return true;
    }
    return false;
}
bool checkCase(int *arr, int size){
    
}
int main(){
    int test_cases;
    cin>>test_cases;
    int N;
    while(test_cases--){
        cin>>N;
        int arr[N];
        memset(arr, 1, sizeof(arr));
        bool max=false;
        bool found=false;
        while(max==false){
            if(!doesContainZero(arr, N)){
                if(checkCase(arr, N)){
                    found=true;
                    break;
                }
            }
            if(allNine(arr, N)){
                max=true;
            }   
        }
        if(found==true) printArray(arr, N);
        else if(max==true)  cout<<"-1"<<endl;
    }
    return 0;
}