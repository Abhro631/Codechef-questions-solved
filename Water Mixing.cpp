#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int x=a-b;
	    if(x==0)
	    cout<<"YES"<<endl;
	    else if(x>0){
	        if(abs(x)<=d)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else{
	        if(abs(x)<=c)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
