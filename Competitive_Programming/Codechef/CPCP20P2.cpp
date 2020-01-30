#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    ll n; 
    cin>>n;
    int flag;
    ll count=0;
    for(ll i=1; i<=n; i++){
        flag=1;
        ll temp=i;
        vector<int> digits, digSort;
        while(temp){
            int dig=temp%10;
            digits.push_back(dig);
            digSort.push_back(dig);
            temp=temp/10;
        }
        reverse(digits.begin(), digits.end());
        sort(digSort.begin(), digSort.end());
        for(ll j=0; j<digits.size(); j++){
            if(digits[j]>digSort[j]){
                flag=0;
                break;
            }    
        }
        if(flag)    count++;
    }
    cout<<count;
    return 0;
}