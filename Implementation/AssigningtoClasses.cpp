#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> ans(2*n);

        for(int i=0; i< 2*n; i++){
            cin>>ans[i];
        }
        sort(ans.begin(), ans.end());
        cout<<ans[n]-ans[n-1]<<endl;
    }
}