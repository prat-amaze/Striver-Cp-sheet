#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;

    int tot= (w*k*(w+1))/2;
    int p= n- tot;
    if(p>=0){
        cout<<0<<endl;
    }
    else{
        cout<<(-p)<<endl;
    }
}