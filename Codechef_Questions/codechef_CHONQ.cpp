#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n, k;
		cin>>n>>k;
		vector<long long int> a(n);
		for(long long int i=0; i<n; i++){
			cin>>a[i];
		}
		long long int sum=0;
		long long int r=n;
		int flag=0;
		for(long long int i=0; i<n; i++){
			if(flag){
				break;
			}
			for(long long int j=i; j<n; j++){
				if(sum<=k){
					sum+=a[j]/(j-i+1);
				}else{
					sum=0;
					break;
				}
				if(j==n-1){
					if(sum<=k){
						r=i;
						flag++;
						break;
					}else{
						sum=0;
						break;
					}
				}
			}
		}
		cout<<r+1<<endl;
	}
	return 0;
}
