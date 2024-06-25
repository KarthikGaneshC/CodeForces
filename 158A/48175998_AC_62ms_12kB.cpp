#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    int t=0;
    int z=50;
    cin>>n>>k;
    int a[z];
    for(int j=0; j<n; j++){
        cin>>a[j];
    }
    int x=a[k-1];
    for(int j=0; j<n; j++){
        if(a[j]>=a[k-1] && a[j]!=0){
            t++;
        }
    }
    cout<<t<<endl;
    return 0;
}