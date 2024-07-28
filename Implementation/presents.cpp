#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;

    vector<int> ans(n+1, 0);

    for(int i=1; i<=n; i++){
        int value;
        cin>>value;

        ans[value]= i;
    }

    for(int i=1; i<n+1; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}