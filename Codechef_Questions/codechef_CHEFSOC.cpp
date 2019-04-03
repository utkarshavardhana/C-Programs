#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n), b(n, 1);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<n; i++){
			if(a[i]==2){
				if(i==n-2){
					b[i+1]+=1;
				}
				if(i<=n-3){
					b[i+1]+=1;
					b[i+2]+=1;
				}
			}
		}
		int sum=0;
		for(int i=0; i<n; i++){
			sum+=a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
