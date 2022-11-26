#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    string s;cin>>s;
    string s1,s2;
    for(int i=0;i<n/2;i++) s1+=s[i];
    for(int i=n/2;i<n;i++) s2+=s[i];
    if(s1==s2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
}
}
