#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
    int testCase;
    cin>>testCase;
    while(testCase--){
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        do{
            for(int i=0; i<s.size(); i++){
                cout<<s[i];
            }
            cout<<" ";
        }while(next_permutation(s.begin(), s.end()));
        cout<<endl;
    }
    return 0;
}