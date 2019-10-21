#include<iostream>
#include<cstring>

using namespace std;

void inline_multiply(int num, int multiplier){
    int num_arr[3];
    int num_arr_counter=0;
    int temp=num;
    while(temp>0){
        num_arr[num_arr_counter++]=temp%10;
        temp=temp/10;
    }
    int carry=0;
    int result[200];
    memset(result, 0, 200*sizeof(int));
    int result_counter=0;
    for(int i=0; i<=num_arr_counter; i++){
        temp=num_arr[i]*multiplier;
        temp=temp+carry;
        result[result_counter++]=temp%10;
        carry=temp/10;
    }
    for(int i=result_counter; i>=0; i++){
        printf("%d", result[i-1]);
    }

}

int main(){
    inline_multiply(5, 5);
    return 0;
}