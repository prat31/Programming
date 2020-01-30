#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        vector<int> skill(n);
        for(int i=0; i<n; i++){
            cin>>skill[i];
        }
        int min=INT_MAX;
        int diff=0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                diff=abs(skill[i]-skill[j]);
                if(diff<min)    min=diff;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}