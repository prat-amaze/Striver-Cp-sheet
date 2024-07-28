#include<bits/stdc++.h>
using namespace std;

void solve(vector<string> &ops){
    int ans=0;
    for(auto &op: ops){
        if(op=="++X" || op=="X++"){
            ans++;
        }
        else{
            ans--;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<string> ops(n);

    for(int i=0; i<n; i++){
        cin>>ops[i];
    }
    solve(ops);
    
    return 0;
}