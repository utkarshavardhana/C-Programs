#include <iostream>
using namespace std;

/*
  This program checks the longest palindromic subsequence in the given string. 
  This implementation seems to have a bug.
*/

void checkPalindrome(string s){
	int n = s.size();
	if(n==1){
		cout<<s<<" is itself the longest palindromic subsequence"<<endl;
	}else if(n==0){
		cout<<"This is an empty string"<<endl;
	}else{
		int maxpalindromeLength = 0;
		int max_p_i = 0, max_p_j = 0;
		for(int i=0; i<2*n-1; i++){
			int palindromeLength = i%2?0:1;
			int p_i = 0, p_j = 0;
			for(int j=0; j<n/2; j++){
				if(((i/2-j-1) >=0) && ((i/2+j) <= (n-1)) && (s[i/2-j-1]==s[i/2+j])){
					palindromeLength+=2;
					p_i = i/2-j-1;
					p_j = i/2+j;
				}else{
					if(maxpalindromeLength < palindromeLength){
						maxpalindromeLength = palindromeLength;
						max_p_i = p_i;
						max_p_j = p_j;
					}
					break;
				}
			}
		}
		for(int i = max_p_i; i <= max_p_j; i++){
			cout<<s[i];
		}
		cout<<" is the longest palindromic subsequence of length "<<maxpalindromeLength<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		checkPalindrome(s);
	}
	return 0;
}
