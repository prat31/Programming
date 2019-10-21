#include<iostream>

using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    int num;
    while(test_cases--){
        cin>>num;
        int last_digit=num%10;
        int first_digit=0;
        while(num>0){
            first_digit=num%10;
            num=num/10;
        }
        cout<<first_digit+last_digit<<endl;
    }
    return 0;
}