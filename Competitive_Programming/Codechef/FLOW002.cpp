#include<iostream>

using namespace std;

int main(){
    int test_case;
    cin>>test_case;
    int a, b;
    while (test_case--)
    {
        cin>>a>>b;
        cout<<a%b<<endl;
    }
    
    return 0;
}