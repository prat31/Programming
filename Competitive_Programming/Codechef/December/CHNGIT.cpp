#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        vector<int> arr;
        int temp;
        bool special=false;
        for(int i=0; i<n; i++){
            cin>>temp;
            arr.push_back(temp);
        }
        int count[101];
        memset(count, 0, sizeof(count));
        for(int i=0; i<n; i++){
            count[arr[i]]++;
        }
        int max=0;
        for(int i=0; i<101; i++){
            if(count[i]>=max)   max=count[i];
        }
        cout<<n-max<<endl;
    }
    return 0;
}