#include<iostream>
using namespace std;

/*unsigned int factorial(int n){
    if(n==0)    return (1);
    unsigned int sum=1;
    for(int i=n; i>0; i--){
        sum=sum*i;
    }
    return sum;
}*/
//The above method is inefficient, we need to use inline method to get values as large as 100!
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
    int result_counter=0;
    for(int i=0; i<num_arr_counter; i++){
        temp=num_arr[i]*multiplier;
        temp=temp+carry;
        result[result_counter++]=temp%10;
        carry=temp/10;
    }
    for(int i=result_counter; i>=0; i++){
        printf("%d", result[i]);
    }

}
int main(){
    int t;
    cin>>t;
    int num[t];
    for(int i=0; i<t; i++){
        cin>>num[i];
    }

    for(int i=0; i<t; i++)
         inline_factorial(num[i]);
    return 0;
}