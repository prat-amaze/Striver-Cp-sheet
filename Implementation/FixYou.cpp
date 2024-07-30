#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int ans=0;

        for(int i=0; i<n; i++){
            string row;
            cin>>row;
            if(row[m-1]== 'R'){
                ans++;
            }
            if(i== n-1){
                for(int j=0; j<m-1; j++){
                    if(row[j] == 'D'){
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}

