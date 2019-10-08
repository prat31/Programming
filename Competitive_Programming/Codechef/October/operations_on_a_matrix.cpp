#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int64_t  test_case;
    cin>>test_case;
    int64_t  row, column, operation;
    while(test_case--){
        cin>>row>>column>>operation;
        int64_t  arr[row][column];
        memset(arr, 0, sizeof(arr[0][0]) * row * column);
        int64_t  operation_row, operation_column;
        while(operation--){
            cin>>operation_row>>operation_column;
            operation_row--;
            operation_column--;
            for(int64_t  i=0; i<row; i++){
                arr[i][operation_column]++;
                //if(arr[i][operation_column]%2!=0)   answer_odd++; this is wrong because it counts wrong number of odd number in 
                                                                    //the middle steps
            }
            for(int64_t  i=0; i<column; i++){
                arr[operation_row][i]++;
                //if(arr[operation_row][i]%2!=0)  answer_odd++;            
            }
        }
        int64_t  answer_odd=0, x;
        for(int64_t  i=0; i<row; i++){
            for(int64_t  j=0; j<column; j++){
                if(arr[i][j]%2!=0)  answer_odd++;
            }
        }
        
        cout<<answer_odd<<endl;
    }

    return 0;
}