#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n==2){
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<n-2<<" "<<n<<endl;
            cout<<n-1<<" "<<n-1<<endl;
            n=n-1;

            while(n!= 2){
                cout<<n-2<<" "<<n<<endl;
                n=n-1;
            }
        }
    }
}