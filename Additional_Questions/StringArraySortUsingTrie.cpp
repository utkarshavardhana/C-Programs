#include <bits/stdc++.h>
using namespace std;
/*
  This program sorts an array of strings or words using trie
*/

struct Trie{
	int index;
	Trie* child[26];
	Trie(){
		for(int i=0; i<26; i++){
			child[i]=NULL;
		}
		index=-1;
	}
};

void insert(Trie* root, string str, int index){
	Trie* node=root;
	for(int i=0; i<str.size(); i++){
		char ind=str[i]-'a';
		if(!node->child[ind]){
			node->child[ind]=new Trie();
		}
		node=node->child[ind];
	}
	node->index=index;
}

bool preorder(Trie* node, vector<string> a){
	if(node==NULL){
		return false;
	}
	for(int i=0; i<26; i++){
		if(node->child[i]!=NULL){
			if(node->child[i]->index!=-1){
				cout<<a[node->child[i]->index]<<endl;
			}
			preorder(node->child[i], a);
		}
	}
}

void printSorted(vector<string> a, int n){
	Trie* root=new Trie();
	for(int i=0; i<n; i++){
		insert(root, a[i], i);
	}
	preorder(root, a);
}

int main() {
	int n;
	cin>>n;
	vector<string> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	printSorted(a, n);
	return 0;
}
