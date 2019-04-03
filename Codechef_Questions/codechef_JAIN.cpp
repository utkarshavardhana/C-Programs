#include <bits/stdc++.h>
using namespace std;

/*
  Partially accepted solution, time limit is exceeding for a few test cases.
*/

int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		vector<set<char> > a(n);
		for(long long int i=0; i<n; i++){
			string str;
			cin>>str;
			for(int j=0; j<str.size(); j++)
			    a[i].insert(str[j]);
		}
		
		int count=0;
		for(int i=0; i<n-1; i++){
			if(a[i].size()>=5){
				count+=n-(i+1);
				continue;
			}
			for(int j=i+1; j<n; j++){
				if(a[j].size()+a[i].size()>=5){
					set<char> temp=a[i];
					temp.insert(a[j].begin(), a[j].end());
					if(temp.size()>=5){
						count++;
					}
				}
			}
		}
//		for(long long int i=0; i<n; i++){
//			for(set<char>::iterator it=a[i].begin(); it!=a[i].end(); it++)
//			    cout<<(*it)<<" ";
//			cout<<endl;
//		}
		cout<<count<<endl;
	}
	return 0;
}
