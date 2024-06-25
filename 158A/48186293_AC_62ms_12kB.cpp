#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int z=50;
    int a[z];
    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
     int t=0;
    for(int i=0; i<n; i++){
        if(a[i]>=a[k-1] && a[i]!=0){
           t++;
        }
    }
    cout<<t<<endl;
    return 0;
}