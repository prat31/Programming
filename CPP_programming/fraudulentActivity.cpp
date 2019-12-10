#include<bits/stdc++.h>

using namespace std;

int median(vector<int> temp, int d){
    sort(temp.begin(), temp.end());
    if(d%2==0){
        return ((temp[d/2]+temp[(d-2)-1])/2);
    }
    else{
        return temp[d/2];
    }
}

int activityNotifications(vector<int> expenditure, int d) {
    int result=0;
    for(int i=d; i<expenditure.size(); i++){
        if(d%2==0){
            vector<int> temp;
            for(int j=i-1; i-j<d; j--){
                temp.push_back(expenditure[j]);
            }
            int med = median(temp, d);
            if(expenditure[i]>=2*med)   result++;
            temp.clear();
        }
        else{
            vector<int> temp;
            for(int j=i-1; i-j<=d; j--){
                temp.push_back(expenditure[j]);
            }
            int med = median(temp, d);
            if(expenditure[i]>=(2*med))    result++;
            temp.clear();
        }
    }
    return result;
}



int main(){
    int n, d;
    cin>>n>>d;
    vector<int> arr;
    int temp;
    while(n--){
        cin>>temp;
        arr.push_back(temp);
    }
    int result = activityNotifications(arr, d);
    cout<<result;
}