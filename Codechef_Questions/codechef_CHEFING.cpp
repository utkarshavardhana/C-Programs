#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
 	    int n;
 	    cin>>n;
 	    vector<string> s(n);
 	    for(int i=0; i<n; i++){
 	    	cin>>s[i];
        }
        map<char, int> m;
        for(int i=0; i<s[0].size(); i++){
 	    	m[s[0][i]]=1;
        }
        for(int i=0; i<n; i++){
	        for(map<char, int>::iterator it=m.begin(); it!=m.end(); it++){
	 	    	int found = count(s[i].begin(), s[i].end(), (*it).first); 
			    if (!found){
			    	(*it).second=0;
				}
	        }
	    }
	    int num=0;
	    for(map<char, int>::iterator it=m.begin(); it!=m.end(); it++){
 	    	num+=(*it).second;
        }
        cout<<num<<endl;
	}
	return 0;
}
