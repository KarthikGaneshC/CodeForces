#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    int t=n+1;
   while(n--){
        string s,s1;
        cin>>s;
       s1="codeforces";
        int x=0,i;
       for(i=0; i<10; i++){
           if(s[i]!=s1[i]){
               x++;
           }
       }
       cout<<x<<endl;
    }
        
    return 0;
}