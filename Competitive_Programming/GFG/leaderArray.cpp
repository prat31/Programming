    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        // ios_base::sync_with_stdio(false);
        // cin.tie(nullptr);
        // cout.tie(nullptr);
        int testCases;
        cin>>testCases;
        while(testCases--){
            int n;
            cin>>n;
            vector<int> arr;
            int temp;
            for(int i=0; i<n; i++){
                cin>>temp;
                arr.push_back(temp);
            }
            stack<int> stack;
            int max=arr[n-1];
            int right=arr[n-1];
            stack.push(max);
            int count=0;
            for(int i=n-2; i>=0; i--){
                if(arr[i]>=max){
                    stack.push(arr[i]);
                    max=arr[i];
                    count++;
                }
            }
            for(int i=0; i<count; i++){
                cout<<stack.top()<<" ";
                stack.pop();
            }
            cout<<right<<endl;
        }
        return 0;
    }