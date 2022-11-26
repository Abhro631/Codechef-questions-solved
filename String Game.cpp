#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,gr;
	cin>>t;
	while(t--){
	    int y=0;
	    map<int,int> gr;cin>>a;
	    string str; cin>>str;
	    for(b=0;b<a;b++){
	        gr[str[b]]++;
	    }
	    for(auto x:gr){
	        if(x.second%2==1){
	        y=1;break;}
	    }
	    if(!y)
	    printf("YES\n");
	    else
	    printf("NO\n");
	    
	}
	
	return 0;
}
