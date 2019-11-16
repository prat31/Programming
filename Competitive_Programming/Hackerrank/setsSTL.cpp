#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Q;
    cin>>Q;
    char operation;
    int value;
    set<int> arr;
    for(auto i=0; i<Q; i++){
        cin>>operation;
        cin>>value;
        if(operation=='1'){
            arr.insert(value);
        }
        else if(operation=='2'){
            arr.erase(value);
        }
        else if(operation=='3'){
            set<int>::iterator ptr = arr.find(value);
            if(ptr!=arr.end())  cout<<"Yes"<<endl;
            else                cout<<"No"<<endl;
        }
    }
    return 0;
}



