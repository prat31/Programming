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
        for(int i=0; i<n; i++){
            cin>>temp;
            arr.push_back(temp);
        }
        bool found=false;
        for(int i=0; i<n-1; i++){
            found=false;
            for(int j=i+1; j<n; j++){
                if(arr[j]>arr[i]){
                    cout<<arr[j]<<" ";
                    found=true;
                    break;
                }
            }
            if(found==false)    cout<<"-1 ";
        }
        cout<<endl;
    }
    return 0;
}