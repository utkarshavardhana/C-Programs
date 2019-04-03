//Implement a Regular Expression matching (.) for 1 character and (*) for stream of characters (asked in facebook)
#include <iostream>
#include <string>
using namespace std;

bool REValidator(string re, string str){
	int j=0;
	for(int i=0; i<str.size(); i++){
		if(re[j]!='.' && re[j]!='*'){
			if(re[j]==str[i]){
				j++;
			}else{
				return false;
			}
		}else{
			if(re[j]=='.'){
				if(j==re.size()-1){
					if(i==str.size()-1){
						return true;
					}else{
						return false;
					}
				}else{
					if(i==str.size()-1){
						return false;
					}else{
						j++;
					}
				}
			}else if(re[j]=='*'){
				if(j==re.size()-1){
					return true;
				}else if(re[j+1]=='.'){
					
				}else if(re[j+1]!='.'){
					if(str[i+1]==re[j+1]){
						j++;
						continue;
					}
				}
			}
		}
		if(i==str.size()-1 && j==re.size()-1){
			return true;
		}
	}
}

int main() {
	int t;
	cin>>t;
	while(t--){
		string re, str;
		cin>>re;
		cin>>str;
		bool b = REValidator(re, str);
		if(b){
			cout<<"true"<<endl;
		}else{
			cout<<"false"<<endl;
		}
	}
	return 0;
}
