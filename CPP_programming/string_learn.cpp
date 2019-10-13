#include<iostream>

using namespace std;

int main(){
    string phrase="Pratyush";

    cout<<phrase.length()<<endl; 

    cout<<phrase.find("tyu", 0)<<endl;

    string substring=phrase.substr(3, 4);

    cout<<substring<<endl; 

    cout<<"Enter your name : ";
    getline(cin, phrase);
    cout<<"Hello "<<phrase<<endl;
}