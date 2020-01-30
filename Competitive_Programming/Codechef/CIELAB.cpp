#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int diff=a-b;
    if(diff%10==9)  diff--;
    else            diff++;
    cout<<diff<<endl;
    return 0;
}