#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		vector<int> a(k), b(k);
		for(int i=0; i<k; i++){
			cin>>a[i]>>b[i];
		}
		cout<<n-k<<" ";
		if(n-k){
			vector<bool> r(n+1, true), c(n+1, true);
			r[0]=false;
			c[0]=false;
			for(int i=0; i<k; i++){
				r[a[i]]=false;
				c[b[i]]=false;
			}
			for(int i=0; i<n+1; i++){
				if(r[i]){
					cout<<i<<" ";
					r[i]=false;
					for(int j=0; j<n+1; j++){
						if(c[j]){
							cout<<j<<" ";
							c[j]=false;
							break;
						}
					}
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
