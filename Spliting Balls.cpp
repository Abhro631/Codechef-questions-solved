#include <iostream>
#include<algorithm>
#include<map>
using namespace std;
long long modul=1000000007;
long long a[1000001];
int main() {
	// your code goes here
	long t;cin>>t;
	a[0]=0;
	a[1]=1;
	for(long long i=2;i<=1000000;i++){
	    a[i]=((a[i-1]*i)%modul)%modul;
	}
	while(t--){
	    long long n;
	    cin>>n;
	    map<long long ,long long>m;
	    for(long long j=0;j<n;j++){
	      long int b;
	      cin>>b;m[b]++;  
	    } long long res=0;
	    for (auto k:m){
	        res=(res+(a[k.first]*k.second)%modul)%modul;}
	        cout<<res<<endl;
	        
	    }
	    
	return 0;
}
