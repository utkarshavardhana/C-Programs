#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		long long int n;
		cin>>k>>n; 
		
		int o, t, h;
		o = k % 10;
		t = (k / 10) % 10;
		h = k / 100;
		
		if(o == t && t == h){
			cout<<"1"<<endl;
		}else if((o == t && t != h) || (o == h && t != h) || (t == h && o != h)){
			cout<<"8"<<endl;
		}else{
			cout<<"27"<<endl;
		}
		
	}
	return 0;
}
