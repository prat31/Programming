#include<iostream>

using namespace std;

bool notZero(string str){
    for(int i=0; i<str.size(); i++){
        if(str[i]=='1')   return true;
    }
    return false;
}

string XOR(string a, string b){
    int maxSize = a.size();
    int minSize = b.size();
    string maxString = a;
    string minString = b;
    if(b.size()>a.size()){
       maxSize = b.size();
       minSize = a.size();
       maxString = b;
       minString = a;
    }
    string answer;
    for(int i=0; i<maxSize; i++){
        if(maxSize-minSize-i>0){
            if(maxString[i]=='1')   
                answer.push_back('1');
            else
                answer.push_back('0');
        }
        else{
            if(maxString[i]=='0'&&minString[i-(maxSize-minSize)]=='0')
                answer.push_back('0');
            else if(maxString[i]=='1'&&minString[i-(maxSize-minSize)]=='1')
                answer.push_back('0');
            else if(maxString[i]=='1'&&minString[i-(maxSize-minSize)]=='0')
                answer.push_back('1');
            else if(maxString[i]=='0'&&minString[i-(maxSize-minSize)]=='1')
                answer.push_back('1');
        }
    }
    return answer;
}

string AND(string a, string b){
    int maxSize = a.size();
    int minSize = b.size();
    string maxString = a;
    string minString = b;
    if(b.size()>a.size()){
       maxSize = b.size();
       minSize = a.size();
       maxString = b;
       minString = a;
    }
    string answer;
    for(int i=0; i<maxSize; i++){
        if(maxSize-minSize-i>0){
            answer.push_back('0');
        }
        else{
            if(maxString[i]=='1'&&minString[i-(maxSize-minSize)]=='1')
                answer.push_back('1');
            else 
                answer.push_back('0');
        }
    }
    return answer;
}

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        string A;
        string B;
        cin>>A;
        cin>>B;
        long long int answer=0;
        while(notZero(B)){
            answer++;
            string U = XOR(A, B);
            string V = AND(A, B);
            A = U;
            if(!notZero(V)){
                break;
            }
            else{
                V.push_back('0');
                B=V;
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}