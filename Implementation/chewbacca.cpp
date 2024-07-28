#include<bits/stdc++.h>
using namespace std;

void solve(string x){
    string ans=""; 
    for(int i=0; i<x.size(); i++){
        int dig= x[i]- '0';
        if(i==0 && dig==9){
            ans+= '9';
        }
        else{
            int trans= min(dig, 9-dig);
            ans+= trans+'0';
        }
    }
    cout<<ans<<endl;
}

int main(){
    string x;
    cin>>x;
    
    solve(x);

    return 0;
}