#include<iostream>
using namespace std;

unsigned int factorial(int n){
    if(n==0)    return (1);
    unsigned int sum=1;
    for(int i=n; i>0; i--){
        sum=sum*i;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    int num[t];
    for(int i=0; i<t; i++){
        cin>>num[i];
    }

    for(int i=0; i<t; i++)
         cout<<factorial(num[i])<<endl;
    return 0;
}