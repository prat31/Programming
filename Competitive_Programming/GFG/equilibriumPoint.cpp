#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"1"<<endl;
            continue;
        }
        vector<int> arr;
        int temp;
        long long int arrsum=0;
        for(int i=0; i<n; i++){
            cin>>temp;
            arr.push_back(temp);
            arrsum+=temp;
        }
        long long int lsum=0, rsum=arrsum-arr[0];
        bool found=false;
        for(int i=1; i<n; i++){
            rsum=rsum-arr[i];
            lsum=lsum+arr[i-1];
            if(lsum==rsum){
                cout<<i+1<<endl;
                found=true;
                break;
            }
        }
        int minusone=-1;
        if(found==false)    cout<<minusone<<endl;
    }
    return 0;
}