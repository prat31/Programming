#include<bits/stdc++.h>
#define MAX 100000

using namespace std;

int absolute(int a, int b){ 
    if(a>=b) return(a-b);
    return (b-a);
}

int min(int a, int b){  return a<b?a:b;}

int main(){
    int testcases;
    cin>>testcases;
    while(testcases--){
        int n;
        cin>>n;
        string A, B;
        cin>>A;
        cin>>B;
        int noZeroA=0, noOneA=0, noZeroB=0, noOneB=0;
        for(int i=0; i<n; i++){
            if(A[i]=='0')   noZeroA++;
            if(A[i]=='1')   noOneA++;
            if(B[i]=='0')   noZeroB++;
            if(B[i]=='1')   noOneB++;
        }
        vector<int> answer(MAX);
        int minOne = absolute(noOneA, noOneB);
        int maxOne = min(noZeroA, noOneB)+min(noZeroB, noOneA);
        for(int i=minOne; i<=maxOne; i+=2){
            vector<int> temp = nCr(n, i);
            answer=largeSum(answer, temp);  
        }
    }
    return 0;
}