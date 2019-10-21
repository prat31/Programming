#include<iostream>

using namespace std;

struct node{
    int data;
    node *left, *right;
};

class BSTnode{

    private:
        node *root;
    public:
        BSTnode(){
            root=NULL;
        }
        void insert(int value){
            node *temp=new node();
            temp->data=value;
            temp->left=NULL;;
            temp->right=NULL;
            if(root==NULL){
                root=temp;
            }
            else{
                if(value<root->data)
                    
            }
        }
        
};

int main(){
    int choice;
    BSTnode bst;
    while(1){
        cout<<"******Operations******"<<endl;
        cout<<"1. Insert";
        cout<<"2. Search";
        cout<<"3. Delete";
        cout<<"4. Display";
        cout<<"5. Exit";
        cin>>choice;
        int value;
        switch(choice){
            case 1:
            {
                cout<<endl<<"Enter value to insert : ";
                cin>>value;
                bst.insert(value);
                break;
            }
            
            case 2:
            {
                cout<<endl<<"Enter value to search : ";
                cin>>value;
                bst.search(value);
                break;
            }

            case 3:
            {
                cout<<endl<<"Enter value to delete : ";
                cin>>value;
                bst.delete(value);
                break;
            }

            case 4:
            {
                bst.display();
                break;
            }
            case 5:
            {
                exit(0);
                break;
            }
            default:
            {
                cout<<endl<<"Please enter a valid choice.";
                break;
            }

        }
    }

    return 0;
}
            