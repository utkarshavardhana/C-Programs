#include <bits/stdc++.h>
using namespace std;

/*
  This problem says f(n,k)=1, if n<=k; and f(n,k)=f(n-1,k)+f(n-2,k)+f(n-3,k)+...+f(n-k,k), if n>k.
  Given that output the result based on inputs n and k
*/

int kfibonacci(int n, int k){
	if(n<=k){
		return 1;
	}else{
		vector<long long int> a(n+1);
		a[0]=0;
		long long int sum=0;
		for(long long int i=1; i<=n; i++){
			if(i<=k){
				a[i]=1;
			}else{
				a[i]=sum;
				sum-=a[i-k];
			}
			sum+=a[i];
			sum%=1000000007;
		}
		return a[n];
	}
}

int main(){
	int n, k;
	cin>>n>>k;
	int result = kfibonacci(n, k);
	cout<<result<<endl;
	return 0;
}
