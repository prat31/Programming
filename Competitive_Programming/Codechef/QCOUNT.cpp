#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int testCases;
    cin>>testCases;
    int N;
    int min, max;
    while(testCases--){
        cin>>N;
        cin>>min>>max;
        int arr[N];
        for(auto i=0; i<N; i++){
            cin>>arr[i];
        };
        int counter[max+1];
        memset(counter, 0, sizeof(counter));
        for(auto i=0; i<N; i++){
            counter[arr[i]]++;
        }
        for(auto i=0; i<max+1; i++){
            for(auto j=0; j<counter[i]; j++){
                cout<<i<<" ";
            }
        }

        cout<<"\n";
    }
    return 0;
}