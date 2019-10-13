#include<iostream>
using namespace std;


class Book{
    public :
        string title;
        string author;
        int pages;
};

int main(){
    Book b1;
    b1.title="Harry Potter";
    b1.author="J.K.Rowling";
    b1.pages=500;
    cout<<"title = "<<b1.title<<endl;
    cout<<"author = "<<b1.author<<endl;
    cout<<"pages = "<<b1.pages<<endl;
}