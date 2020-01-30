#include<bits/stdc++.h>

using namespace std;

int trailingZeros(int n){
    int count=0;
    for(int i=5; n/i>=1; i*=5){
        count+=n/i;
    }
    return count;
}

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        cout<<trailingZeros(n)<<endl;
    }
    return 0;
}