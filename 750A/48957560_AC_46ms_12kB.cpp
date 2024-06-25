#include <iostream>
using namespace std;
int main() {
       int n,t=0,c=0,i,k;
       cin>>n>>k;
      int r=(60*4)-k;
          int l=n; 
       for( i=1; i<=n ; i++){
           t=t+(5*i);
         if(t<=r){
             c++;
         }
        
        
       }
       
      
           cout<<c<<endl;
       
     
    return 0;
}