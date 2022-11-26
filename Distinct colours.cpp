#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,max=0;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];
	    int m=0;
	    for(int i=1;i<=n;i++){
	        cin>>arr[i];
	        if(arr[i]>m) m=arr[i];
	    }
	    cout<<m<<endl;
	}
	return 0;
}
