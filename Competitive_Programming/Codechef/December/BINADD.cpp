#include<bits/stdc++.h>

using namespace std;

bool allZero(string str){
    for(int i=0; i<str.size(); i++){
        if(str[i]=='1') return false;
    }
    return true;
}


int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        string A, B;
        cin>>A;
        cin>>B;
        int answer=1;
        if(A.size()!=B.size()){
            if(A.size()>B.size()){
                B.insert(0,(int)A.size()-B.size(), '0');
            }
            else if(A.size()<B.size()){
                A.insert(0, (int)B.size()-A.size(), '0');
            }
        }
        int stringSize = A.size()>B.size()?A.size():B.size();
        bool stopFor = false;
        bool didCase = false;
        for(int i=0; i<stringSize; i++){
            if(A[stringSize-1-i]=='1'&&B[stringSize-1-i]=='1'){
                didCase = true;
                for(int i=stringSize-i-2; i>=0; i--){
                    if((A[i]=='1'&&B[i]=='0')||(A[i]=='0'&&B[i]=='1'))  answer++;
                    else{
                        stopFor = true;
                        break;
                    }
                }
            }
            if(stopFor==true)   break;
        }
        if(didCase==false&&allZero(B))  answer=0;
        cout<<answer<<endl;
    }
    return 0;
}