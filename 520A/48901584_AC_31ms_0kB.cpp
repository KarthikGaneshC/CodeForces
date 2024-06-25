#include <iostream>

using namespace std;
int main() {
        string s;
        int n;
        cin>>n;
        cin>>s;
        int l,l1;
        l=s.size();
        int i,j,k=0;
        
        
        int sx=0,sx1=0;
        j=0;
        for(i=97; i<=122 ; i++){
            k=0;
            
            for(j=0; j<n; j++){
                char x;
                x=tolower(s[j]);
                
                if(i==x){
                    
                    k=1;
                    break;
                }
                
                }
                if(k==0){
                    break;
            }
        }
        if(k==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
        
    return 0;
}