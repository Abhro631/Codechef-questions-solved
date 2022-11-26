#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int a,b,c=0;
	    cin>>a>>b;
	    int x=a+b;
	    for(int i=1;i<=x;i++){
	        if(x%i==0){
	            c++;
	        }
	    }
	    if(c==2)
	    cout<<"Alice"<<endl;
	    else
	    cout<<"Bob"<<endl;
	}
	return 0;
}
