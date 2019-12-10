#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int n;
        cin>>n;
        int problemScores[9];
        memset(problemScores, 0, sizeof(problemScores));
        int problem;
        int score;
        for(int i=0; i<n; i++){
            cin>>problem;
            cin>>score;
            if(problem<=8){
                if(score>problemScores[problem])    problemScores[problem]=score;
            }
        }
        int scoreSum=0;
        for(int i=1; i<9; i++){
            scoreSum=scoreSum +problemScores[i];
        }
        cout<<scoreSum<<endl;
    }
    return 0;
}