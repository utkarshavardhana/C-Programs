#include <bits/stdc++.h>
using namespace std;

/*
  Returns whether any permutation of a string is palindrome
*/

int main() {
	string s;
	cin>>s;
	map<char, int> m;
	for(int i=0; i<s.size(); i++){
		m[s[i]]++;
	}
	int count=0;
	for(map<char, int> :: iterator it=m.begin(); it!=m.end(); it++){
		if((*it).second % 2 == 0){
			continue;
		}else{
			count++;
		}
	}
	if(count==0 || count==1){
		cout<<"Palindrome Possible"<<endl;
	}else{
		cout<<"Palindrome not possible"<<endl;
	}
	return 0;
}
