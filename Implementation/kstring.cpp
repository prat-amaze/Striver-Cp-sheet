#include<bits/stdc++.h>
using namespace std;

void solve(int k, string s){
    unordered_map<char, int> freq;
    for(auto c: s){
        freq[c]++;
    }

    for(auto &entry: freq){
        if((entry.second)%k !=0){
            cout<<"-1";
            return;
        }
    }

    string base="";
    for(auto &entry: freq){
        int count= entry.second/k;
        string util= string(count, entry.first);
        base+= util;
    }

    string ans= "";
    for(int i=0; i<k; i++){
        ans+= base;
    }
    cout<<ans<<endl;
}

int main(){
    int k;
    cin>>k;

    string s;
    cin>>s;

    solve(k, s);
}