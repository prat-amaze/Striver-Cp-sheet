#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z;
    cin>>x>>y>>z;

    int m= max({x, y, z});
    int n= min({x,y,z});

    // int o;
    // if(x != m && x != n){
    //     o=x;
    // }
    // if(y != m && y != n){
    //     o=y;
    // }
    // if(z != m && z != n){
    //     o=z;
    // }
    // cout<<(m-o)+(o-n)<<endl;

    //a better solnis frnds should meet in middle
    cout<<(m-n)<<endl;
    

    return 0;
}