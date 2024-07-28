#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin>>n;

    int ans=0;
    int inside=0;
    for(int i=0; i<n; i++){
        int a, b;
        cin>>a>>b;

        inside-= a;
        inside+= b;

        ans= max(ans, inside);
    }
    cout<<ans<<endl;
}