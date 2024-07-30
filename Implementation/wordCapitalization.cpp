#include<bits/stdc++.h>
using namespace std;



int main(){
    string p;
    cin>>p;

    if(p[0]-'a' >= 0){
        p[0]= (p[0]-'a')+'A';
    }
    cout<<p<<endl;
}