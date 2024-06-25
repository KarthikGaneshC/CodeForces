#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int flag=0;
    for(int i=1; i<n; i++){
    if((i%2==0) && ((n-i)%2==0) && (i+(n-i))==n){
        flag=1;
        break;
    }
    }
    if(flag==1){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}