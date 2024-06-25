#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    int t=n+1;
   while(n--){
        string s,s1;
        cin>>s;
        int l,l1;
        l=s.size();
        int x=0,i,j;
        
        s1=s;
        int sx=0,sx1=0;
        j=0;
        for(i=l-1; i>=0; i--){
            s1[i]=s[l-i-1];
        }
        
        s=s+s1;
        cout<<s<<endl;
    }
        
    return 0;
}