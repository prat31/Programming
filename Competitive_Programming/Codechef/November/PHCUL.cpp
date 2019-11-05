#include<iostream>
#include<utility>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_case;
    cin>>test_case;
    pair <int, int> sc;
    int N_size, M_size, K_size;
    while(test_case--){
        cin>>sc.first>>sc.second;
        cin>>N_size>>M_size>>K_size;
        vector<pair<int, int> > N(N_size);
        vector<pair<int, int> > M(M_size);
        vector<pair<int, int> > K(K_size);
        int temp_x, temp_y;
        for(int i=0; i<N_size; i++){
            cin>>temp_x>>temp_y;
            N.push_back(make_pair(temp_x, temp_y));
        }
        for(int i=0; i<M_size; i++){
            cin>>temp_x>>temp_y;
            M.push_back(make_pair(temp_x, temp_y));
        }
        for(int i=0; i<K_size; i++){
            cin>>temp_x>>temp_y;
            K.push_back(make_pair(temp_x, temp_y));
        }
        
        double final_min_sc_to_N;
        double final_min_sc_to_M;  




    }
}