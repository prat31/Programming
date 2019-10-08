#include<stdio.h>

int main(){
    int test_cases;
    scanf("%d", &test_cases);
    for(int i=0; i<test_cases; i++){
        int row, column, operation;
        scanf("%d %d %d", &row, &column, &operation);
        int array[row][column];
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                array[i][j]=0;
            }
        }

        for(int i=0; i<operation; i++){
            int operation_row, operation_column;
            scanf("%d %d", &operation_row, &operation_column);
            operation_column--;
            operation_row--;
            for(int i=0; i<column; i++) array[operation_row][i]++;
            for(int i=0; i<row; i++) array[i][operation_column]++;
            int val=0;        
        }

        int count_odd=0;
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(array[i][j]%2!=0)    count_odd++;
            }
        }
        printf("%d", count_odd);
    }    

}