#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n, a, b, k;
		cin>>n>>a>>b>>k;
		long long int sum = n/a + n/b - 2*(n/((a*b)/__gcd(a, b))); 
		if(sum>=k){
			cout<<"Win"<<endl;
		}else{
			cout<<"Lose"<<endl;
		}
	}
	return 0;
}
