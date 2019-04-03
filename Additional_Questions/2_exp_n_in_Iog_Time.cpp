#include <bits/stdc++.h>
using namespace std;

/*
  Finding 2^n in logarithmic  time
*/

int main() {
	int n;
	cin>>n;
	int flag=2;
	long long int result=1;
	while(n){
		result*=flag;
		n--;
	}
	cout<<result;
	return 0;
}
