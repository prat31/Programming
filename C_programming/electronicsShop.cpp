#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int budget, keyboardCount, mouseCount;
    cin>>budget>>keyboardCount>>mouseCount;
    int temp;
    vector<int> keyboard;
    vector<int> mouse;
    for(auto i=0; i<keyboardCount; i++){
        cin>>temp;
        keyboard.push_back(temp);
    }
    for(auto i=0; i<mouseCount; i++){
        cin>>temp;
        mouse.push_back(temp);
    }
    unsigned long long int maxSpent=0;
    for(int i=0; i<keyboardCount; i++){
        // unsigned long long int currentPrice;
        for(int j=0; j<mouseCount; j++){
            // currentPrice = keyboard[i] + mouse[j];
            if((keyboard[i]+mouse[j]>maxSpent)&&(keyboard[i]+mouse[j])<budget){
                maxSpent=keyboard[i]+mouse[j];
            }
        }
    }    
    if(maxSpent==0) cout<<"-1";
    else            cout<<maxSpent;
    return 0;
}