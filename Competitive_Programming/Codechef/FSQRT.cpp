#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    int num;
    while(test_cases--){
        cin>>num;
        cout<<fixed<<setprecision(0)<<sqrt(num)<<endl;
    }
    
    return 0;
}