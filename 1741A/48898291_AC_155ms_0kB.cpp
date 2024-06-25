#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    int t=n+1;
   while(n--){
        string s,s1;
        cin>>s>>s1;
        int l,l1;
        l=s.size();
        l1=s1.size();
        int x=0,i,j;
        int sx=0,sx1=0;
        for(i=0; i<l; i++){
            if(s[i]=='X'){
                sx++;
            }
        }for(i=0; i<l1; i++){
            if(s1[i]=='X'){
                sx1++;
            }
        }
        if(s[l-1]<s1[l1-1]){
            cout<<">"<<endl;
        }
        else if(s[l-1]>s1[l1-1]){
            cout<<"<"<<endl;
        }
        else{
            if(s[l-1]=='S'){
                if(sx>sx1){
                    cout<<"<"<<endl;
                }
                else if(sx<sx1){
                    cout<<">"<<endl;
                }
                else{
                    cout<<"="<<endl;
                }
            }
            else{
                if(sx>sx1){
                    cout<<">"<<endl;
                }
                else if(sx<sx1){
                    cout<<"<"<<endl;
                }
                else{
                    cout<<"="<<endl;
                }
            }
        }
        
    }
        
    return 0;
}
