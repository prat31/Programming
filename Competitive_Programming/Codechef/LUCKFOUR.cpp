#include<iostream>

using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    int num;
    while(test_cases--){
        cin>>num;
        int count_four=0;
        while(num>0){
            if(num%10==4)   count_four++;
            num=num/10;
        }
        cout<<count_four<<endl;
    }
    return 0;
}