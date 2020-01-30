#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

bool existsInCheck(char c, vector<char> check){
    for(int i=0; i<check.size(); i++){
        if(check[i]==c) return true;
    }
    return false;
}

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int count[26];
        memset(count, 0, sizeof(count));
        for(int i=0; i<n; i++){
            count[str[i]-'a']++;
        }
        bool didOperation = false;
        vector<int> answerCollection;
        for(int i=0; i<26; i++){
            if(count[i]>1){
                didOperation = true;
                bool foundOnce = false, foundTwice=false;
                int lastindex, secondlastindex;
                for(int j=n-1; j>=0; j--){
                    if((str[j]-'a')==i){
                        if(foundOnce==false){
                            lastindex=j;
                            foundOnce=true;
                        }
                        else{
                            secondlastindex=j;
                            foundTwice = true;
                        }
                    }
                    if(foundOnce==true&&foundTwice==true)   break;
                }
                answerCollection.push_back(n-(lastindex-secondlastindex));
            }
        }
        sort(answerCollection.begin(), answerCollection.end());
        if(didOperation==false)
            cout<<"0"<<endl;
        else
            cout<<answerCollection[answerCollection.size()-1]<<endl;;
    }
    return 0;
}
