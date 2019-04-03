#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	/*
	4
	5
	1 2 3 7 6
	5
	5 2 3 5 6
	4
    4 5 3 2
    6
    8 4 3 5 6 2
	*/
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		cout<<a[n-1];
		int min=a[n-1], minpos=n-1;
		for(int i=n-2; i>=0; i--){
			if(min>a[i]){
				min=a[i];
				minpos=i;
			}
			if(a[i]<a[i+1]){
			    swap(minpos, i);
				//sort((a.begin()+i+2), a.end());
			}
			cout<<a[i];
		}
		for(int i=0; i<n; i++){
			cout<<a[i]<<" ";
		}
	}
}
