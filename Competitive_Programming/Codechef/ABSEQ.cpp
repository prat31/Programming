#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCases;
    // cin>>testCases;
    testCases=1;
    while(testCases--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int a=0, b=0;
        int i=0;
        while(str[i]!='\0'){
            if(str[i]=='a') a++;
            else if(str[i]=='b'){
                if(a>0){
                    b++;
                    a--;
                }
            }
            i++;
        }
        cout<<n-2*b;
    }
    return 0;
}