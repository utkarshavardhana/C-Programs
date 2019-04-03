#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		long int sum=0;
		vector<long int> a(n);
		for(long int i=0; i<n; i++){
			cin>>a[i];
			sum+=(a[i]-1);
		}
		cout<<sum+1<<endl;
	}
	return 0;
}
