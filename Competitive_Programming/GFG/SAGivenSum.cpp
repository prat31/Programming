#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n, sum;
        cin>>n>>sum;
        vector<int> arr;
        int temp;
        for(int i=0; i<n; i++){
            cin>>temp;
            arr.push_back(temp);
        }
        bool found=false;
        for(int i=0; i<n; i++){
            int currentSum=arr[i];
            if(currentSum==sum){
                cout<<i+1<<" "<<i+1<<endl;
                found=true;
                break;
            }
            for(int j=i+1; j<n; j++){
                if(currentSum<sum){
                    currentSum+=arr[j];
                }
                if(currentSum>sum){
                    break;
                }
                if(currentSum==sum){
                    cout<<i+1<<" "<<j+1<<endl;
                    found=true;
                    break;
                }
            }
            if(found==true) break;
        }
        if(found==false)    cout<<"-1"<<endl;
    }
    return 0;
}