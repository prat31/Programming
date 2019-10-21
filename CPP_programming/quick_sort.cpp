#include<iostream>

using namespace std;

void quickSort(int *arr, int n){
    
}
void display_array(int *arr, int n){
    for(int i=0; i,n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter number of values to sort : ";
    cin>>n;
    cout<<endl;
    int arr[n];
    for(int i=0l; i<n; i++)
    {
        cin>>arr[i];
    }

    quickSort(arr, n);
    display_array(arr, n);
    return 0;
}