#include<iostream>
using namespace std;

int factorial(int n){
    return ((n==1||n==0)?1:n*factorial(n-1));
}


int main()
{
    int test_cases;
    cin>>test_cases;
    int number;
    while(test_cases--){
        cin>>number;
        cout<<factorial(number)<<endl;
    }
    return 0;
}