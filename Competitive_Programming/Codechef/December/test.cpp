#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> test;
    test.push_back('0');
    test.push_back('0');
    test.push_back('0');
    test.push_back('1');
    test.push_back('1');
    vector<int> test2;
    test2.push_back('0');
    test2.push_back('0');
    test2.push_back('1');
    test2.push_back('1');
    test2.push_back('1');
    set<string> check;
    do{
        vector<int> temp = XOR(test, test2);
        check.insert(temp);
    }while(next_permutation(test)&&next_permutation(test2));
    return '0';
}