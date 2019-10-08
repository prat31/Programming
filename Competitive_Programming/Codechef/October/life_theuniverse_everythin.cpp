#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n[10000];
    int i=0;
    while(n[i-1]!=42)
    {
        cin>>n[i];
        if(n[i]==42) break;
        i++;
    }

    i=0;
    while(n[i]!=42)
    {
        cout<<n[i]<<endl;
        i++;
    }

    return 0;
}