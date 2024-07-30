#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    int ans=0;
    int btns=0;
    for(int i=n; i>0; i--){
        ans+= (i+ (i-1)*btns);
        btns++;
    }
    cout<<ans<<endl;
}