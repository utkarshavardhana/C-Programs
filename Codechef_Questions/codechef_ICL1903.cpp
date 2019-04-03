#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n, m, k;
		cin>>n>>m>>k;
		int flag = 0;
		if(n < m){
			cout<<"-1"<<endl;
			flag++;
		}else{
			if(n == m){
				cout<<"0"<<endl;
				flag++;
			}else{
				int count = 0;
				while(n > 0){
					if(n % m == 0){
						cout<<count<<endl;
						flag++;
						break;
					}
					count++;
					n-=k;
				}
			}
			if(!flag){
				cout<<"-1"<<endl;
			}
		}
	}
	return 0;
}
