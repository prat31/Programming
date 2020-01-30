#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int k;
        cin>>k;
        int answer=0;
        for(int i=0; i<n; i++){
            if(arr[i]<arr[k-1]) answer++;
        }
        cout<<answer+1<<endl;
    }
    return 0;
}