#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    ll n;
    cin>>n;
    vector<char> first, last;
    string str;
    for(ll i=0; i<n; i++){
        cin>>str;
        first.push_back(str[0]);
        last.push_back(str[str.size()-1]);
    }
    sort(first.begin(), first.end());
    sort(last.begin(), last.end());
    if(first==last) cout<<"Yes";
    else            cout<<"No";
    return 0;
}