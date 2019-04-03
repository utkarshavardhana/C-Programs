#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n, b;
		cin>>n>>b;
		vector<long long int> w(n), h(n), p(n);
		for(int i=0; i<n; i++){
			cin>>w[i]>>h[i]>>p[i];
		}
		int max_area=0;
		for(int i=0; i<n; i++){
			if(p[i]<=b && max_area<(w[i]*h[i])){
				max_area=w[i]*h[i];
			}
		}
		if(!max_area){
			cout<<"no tablet"<<endl;
		}else{
			cout<<max_area<<endl;
		}
	}
	return 0;
}
