#include<iostream>
#include<cstring>
using namespace std;

void sieveOfEratosthenes(int n){
     bool prime[n+1];
     memset(prime, true, sizeof(prime));
     for(auto i=2; i*i<=n; i++){
         if(prime[i]==true){
             for(auto j=i*i; j<=n; j=j+i){
                 prime[j]=false;
             }
         }
     }

     for(auto i=2; i<=n; i++){
         if(prime[i]){
             cout<<i<<" ";
         }
     }
}

int main(){
    int prime_upto;
    cout<<"Enter a number : ";
    cin>>prime_upto;
    cout<<"\n"<<"Prime numbers upto "<<prime_upto<<" are :"<<endl;
    sieveOfEratosthenes(prime_upto);
    return 0 ;
}