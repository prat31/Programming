#include<iostream>
#include<vector>

using namespace std;

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        vector<int> arr;
        int temp;
        for(auto i=0; i<n; i++){
            cin>>temp;
            arr.push_back(temp);
        }
        int noOfZero=0;
        int noOfTwo=0;
        for(auto i=0; i<n; i++){
            if(arr[i]==0) noOfZero++;
            else if(arr[i]==2)  noOfTwo++;
        }
        cout<<((noOfZero*(noOfZero-1))/2+((noOfTwo)*(noOfTwo-1))/2)<<endl;
    }
    return 0;
}