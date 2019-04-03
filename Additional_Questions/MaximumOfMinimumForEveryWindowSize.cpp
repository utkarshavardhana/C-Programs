#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    vector<int> :: iterator it;
	    it = max_element(a.begin(), a.begin());
	    cout<<"*it"<<" ";
	    for(int i=1; i<=n; i++){
	        for(int j=0; j<n-i; j++){
	            a[j]=min(a[j], a[j+i]);
	            cout<<a[j]<<" ";
	        }
	        it = max_element(a.begin(), a.begin()+(n-i));
	        cout<<"*it"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
