#include<iostream>

using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    int num;
    while(test_cases--){
        cin>>num;
        int sum=0;
        while(num>0){
            sum=sum*10+num%10;
            num/=10;
        }
        cout<<sum<<endl;
    }

    return 0;
}