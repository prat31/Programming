#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    short test_cases;
    cin>>test_cases;
    while(test_cases--){
        int n;
        cin>>n;
        int arr[n];
        int global_max_star_value=0;    
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i>0){
                int local_max_star_value=0;
                for(int j=i-1; j>=0; j--){
                    if(arr[j]%arr[i]==0)    local_max_star_value++;
                }
                if(local_max_star_value>global_max_star_value)  global_max_star_value=local_max_star_value;
            }
        }
        cout<<global_max_star_value<<endl;
    }
    return 0;
}