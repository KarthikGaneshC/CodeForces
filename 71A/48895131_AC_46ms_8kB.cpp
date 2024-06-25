#include <iostream>
#include<string.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int t=n+1;
   while(n--){
        
        string s,s1;
        cin>>s;
       
        
        int l=s.size();
        if(l>10){
            int x=l-2;
            cout<<s[0]<<x<<s[l-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
       
    }
        
    return 0;
}