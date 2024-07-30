#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int prev=-1;
    int cur=0, ans=0;

    for(int i=0; i<n; i++){
        int value;
        cin>>value;

        if(value> prev){
            cur++;
            ans= max(ans, cur);
        }
        else{
            cur=1;
        }
        prev= value;
    }
    cout<<ans<<endl;

}