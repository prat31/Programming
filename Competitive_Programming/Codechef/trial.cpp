#include<bits/stdc++.h>
#include<regex>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
    // cin.ignore('\n');
    int testCases;
    // cin>>testCases;
    testCases=1;
    while(testCases--){
        int n;
        cin>>n;
        vector<pair<string, string>> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i].first;
            cin>>arr[i].second;
        }
        sort(arr.begin(), arr.end());
        for(int i=0; i<n; i++){
            if(regex_match(arr[i].second, regex(".+@gmail.com"))){
                cout<<arr[i].first<<endl;
            }
        }
    }
    return 0;
}