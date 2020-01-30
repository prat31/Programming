#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        string s;
        cin>>s;
        stringstream ss(s);
        vector<string> answer;
        string temp;
        while(getline(ss, temp, '.')){
            answer.push_back(temp);
        }
        for(auto i=0; i<answer.size(); i++){
            cout<<answer[answer.size()-1-i];
            if(i+1==answer.size())  break;
            else                    cout<<".";    
        }
        cout<<endl;
    }
    return 0;
}