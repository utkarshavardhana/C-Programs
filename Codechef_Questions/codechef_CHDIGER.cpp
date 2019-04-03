#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n;
		int d;
		cin>>n>>d;
		vector<int> a;
		while(n){
			a.push_back(n%10);
			n/=10;
		}
		reverse(a.begin(), a.end());
		int min=9;
		int count=0;
		for(int i=a.size()-1; i>=0; i--){
			if(a[i]>=d){
				count++;
				a[i]=0;
			}else{
				if(a[i]<=min){
					min=a[i];
				}else{
					count++;
					a[i]=0;
				}
			}
		}
		a.erase(remove(a.begin(), a.end(), 0), a.end());
		for(int i=0; i<count; i++){
			a.push_back(d);
		}
		long long int result=0;
		for(int i=0; i<a.size(); i++){
			result*=10;
			result+=a[i];
		}
		cout<<result<<endl;
	}
	return 0;
}
