#include<iostream>
#include<cstring>
using namespace std;

int main(){
    short test_cases;
    cin>>test_cases;
    int row, column, operation;
    while(test_cases--){
        cin>>row>>column>>operation;
        int row_counter[row], column_counter[column];
        memset(row_counter, 0, sizeof(int)*row);
        memset(column_counter, 0, sizeof(int)*column);
        int operation_row, operation_column;
        while(operation--){
            cin>>operation_row>>operation_column;
            operation_row--;    
            operation_column--;
            row_counter[operation_row]++;
            column_counter[operation_column]++;
        }
        int final_odd_count=0;
        for(unsigned int i=0; i<row; i++){
            for(unsigned int j=0; j<column; j++){
                unsigned int value= row_counter[i]+column_counter[j];
                if(value%2!=0)  final_odd_count++;
            }
        }

        cout<<final_odd_count<<endl;
    }
}