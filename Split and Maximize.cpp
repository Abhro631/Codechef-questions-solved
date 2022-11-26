#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t;cin>>t;
	long int m=998244353;
	while(t--){
	    long int e;
	    cin>>e;long int arra[e];
	    long int s=0;
	    for(int j=0;j<e;j++){
	        cin>>arra[j];
	        s=(s+arra[j])%m;
	    }
	    s=(s*(s-1))%m;
	    cout<<s<<endl;
	    
	}
	return 0;
}
