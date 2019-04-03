#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count = 0;
		while(n){
	        count++;
			n -= pow((int)sqrt(n), 2);
		}
		cout<<count<<endl;
	}
	return 0;
}
