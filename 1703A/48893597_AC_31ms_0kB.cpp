using namespace std;
int main() {
    int n;
    cin>>n;
    int t=n+1;
   while(n--){
        
        string s,s1;
        cin>>s;
        s1="YES";
        
        int l=s.size();
        int i,j,k=0;
        for(i=0; i<l; i++){
            s[i]=toupper(s[i]);
        }
        if(s.compare(s1)==0){
          cout<<"YES"<<endl;
        }
        else{
          cout<<"NO"<<endl;
        }
    }
        
    return 0;
}