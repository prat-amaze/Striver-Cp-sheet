#include<bits/stdc++.h>
using namespace std;

bool part1(int x){
    return (x-1)%4==0;
}

int main(){
    int n;
    cin>>n;

    int p=0,q=0;
    int maxht= INT_MIN, minht=INT_MAX;

    for(int i=0; i<n; i++){
        int value;
        cin>>value;

        if(value> maxht){
            maxht= value;
            p=i;
        }
        if(value<= minht){
            minht= value;
            q=i;
        }
    }
    if(p> q){
        cout<<p + (n-1-q) -1<<endl;
    }
    else{
        cout<<p + (n-1-q)<<endl;
    }
    
    return 0;
}