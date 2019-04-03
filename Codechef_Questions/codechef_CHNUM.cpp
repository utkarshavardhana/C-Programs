#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		vector<long long int> a(n);
		long long int sum=0;
		for(long long int i=0; i<n; i++){
			cin>>a[i];
			if(a[i]<0){
				sum++;
			}
		}
		if(sum>(n-sum)){
			cout<<sum<<" "<<(n-sum)<<endl;
		}else if(sum){
			cout<<(n-sum)<<" "<<sum<<endl;
		}else{
			cout<<n<<" "<<n<<endl;
		}
		
	}
	return 0;
}
