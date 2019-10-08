#include<iostream>

using namespace std;

int main()
{
    int64_t  test_cases;
    cin>>test_cases;
    int64_t  n;
    while(test_cases--){
        cin>>n;
        int64_t  arr[n];
        int64_t global_max=0;
        for(int64_t  i=0; i<n; i++){
            cin>>arr[i];
            if(i>0){
                int64_t current_max=0;
                for(int64_t j=0; j<i; j++){
                    if(arr[j]%arr[i]==0)   current_max++;
                }
                if(current_max>global_max)  global_max=current_max;
            }
        }
        cout<<global_max<<endl;
    }

    return 0;
}