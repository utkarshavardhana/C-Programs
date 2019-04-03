#include <bits/stdc++.h>
using namespace std;

/*
  This program sorts an array 'a' wrt an array 'b' for all the unique elements in 'b', 
  and for all emenets in 'a' which are not in 'b', it simply sorts the remaining array
*/
 
int main(){
	int t;
	cin>>t;
	int n, m;
	while(t--){
		cin>>n>>m;
		vector<int> a(n), b(m);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		for(int i=0; i<m; i++){
			cin>>b[i];
		}
		map<int, int> myMap;
		for(int i=0; i<n; i++){
			myMap[a[i]]++;
		}
		vector<int> result;
		for(int i=0; i<m; i++){
			while(myMap[b[i]]){
				result.push_back(b[i]);
				myMap[b[i]]--;
				if(myMap[b[i]]==0){
					myMap.erase(b[i]);
				}
			}
		}
		for(map<int, int>::iterator it=myMap.begin(); it!=myMap.end(); it++){
			while((*it).second){
				result.push_back((*it).first);
			}
		}
		for(int i=0; i<n; i++){
			cout<<result[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
