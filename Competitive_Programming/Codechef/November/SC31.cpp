#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_case;
    cin>>test_case;
    int no_of_players;
    while(test_case--){
        cin>>no_of_players;
        string weapons[no_of_players];
        for (auto i = 0; i < no_of_players; i++)
        {
            cin>>weapons[i];
        }
        char final_result[10];
        for (auto i = 0; i < no_of_players-1; i++)
        {
            for(auto j=0; j<10; j++){
                if(i==0){
                    final_result[j]=(((weapons[i][j]-'0')^(weapons[i+1][j]-'0'))+'0');
                }
                else{
                    final_result[j]=((final_result[j]-'0')^(weapons[i+1][j]-'0')+'0');
                }
            }
        }
        int result=0;
        for(auto i=0; i<10; i++){
            if(final_result[i]=='1')  result++;
        }
        cout<<result<<endl;
        
    }       
    return 0;
}