#include<bits/stdc++.h>
using namespace std;

bool part1(int x){
    return (x-1)%4==0;
}

int main(){
    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i%2 == 0){
                cout<<'#';
            }
            else if(part1(i)){
                if(j==m-1){
                    cout<<'#';
                }
                else{
                    cout<<'.';
                }
            }
            else{
                if(j==0){
                    cout<<'#';
                }
                else{
                    cout<<'.';
                }
            }
        }
        cout<<endl;
    }
    
    return 0;
}