#include <bits/stdc++.h>
using namespace std;

/*
  This problem requires us to find the greatest digit which can be converted to 0 in n steps, 
  given that we can only reduce the number by subtracting it's Most Significant Digit by the number itself.
  It follows following pattern:
  	 0, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 20, 22, 24, 26, 28, 31, 34, 37, 41, 45, 49, 
     54, 59, 65, 72, 79, 87, 96, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115,...
*/

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long int> a(100000010);
		cout<<a.size();
	}
	return 0;
}
