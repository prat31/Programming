#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        char temp;
        int noOfZero=0, noOfOne=0, noOfTwo=0;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp=='0')   noOfZero++;
            else if(temp=='1')  noOfOne++;
            else if(temp=='2')  noOfTwo++;
        }
        for(int i=0; i<noOfZero; i++){
            cout<<"0 ";
        }
        for(int i=0; i<noOfOne; i++){
            cout<<"1 ";
        }
        for(int i=0; i<noOfTwo; i++){
            cout<<"2 ";
        }
        cout<<endl;
    }
    return 0;
}