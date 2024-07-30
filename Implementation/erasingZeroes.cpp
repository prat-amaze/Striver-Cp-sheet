#include<bits/stdc++.h>
using namespace std;

void solve(string s){
    int zero=0;
    int i=0, j=0;
    while(j< s.size()){
        if(s[j]== '0'){
            j++;
            if(s[i]== '0'){
                i++;
            }
        }
        else{
            if(j!=i) zero+= j-i-1;
            i=j;
            j++;
        }
    }
    cout<<zero<<endl;  
}

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        solve(s);
    }
}