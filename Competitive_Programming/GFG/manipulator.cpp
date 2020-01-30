//got 100 points
#include<bits/stdc++.h>

using namespace std;

char nextAlpha(char c){
    if(c=='Z')  return 'A';
    if(c>=65&&c<90){
        return c+1;
    }
}

string doOperation(string s){
    string answer;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='#'){
            answer[answer.size()-1] = nextAlpha(answer[answer.size()-1]);
        }
        else{
            answer.push_back(s[i]);
        }
    }
    return answer;
}

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        string s1, s2;
        cin>>s1;
        cin>>s2;
        s1=doOperation(s1);
        s2=doOperation(s2);
        if(s1==s2)
            cout<<"Yes"<<endl;
        else    
            cout<<"No"<<endl;
    }
    return 0;
}