#include<bits/stdc++.h>
using namespace std;

int main(){
    int r=0, c=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int value=0;
            cin>>value;

            if(value == 1){
                r=i;
                c=j;
                break;
            }
        }
    }

    int ans= abs(2-r) + abs(2-c);
    cout<<ans<<endl;

    return 0;
}