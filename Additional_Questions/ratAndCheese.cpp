#include <bits/stdc++.h>
using namespace std;

/*
  This program checks whether the rat at position (x,y)=(0,0) will reach the large chunk of cheese denoted by 9, 
  through open ways denoted by 1 and 0 denotes blocked paths.
*/

int _isReachable(vector<vector<int> > &a, int x, int y, int m, int n){
	if(x>=0 && y>=0 && x<=m && y<=n){
		if(a[x][y]==9){
			return 1;
		}
		if(a[x][y]==1){
			if(_isReachable(a, x, y+1, m, n)==1){
				return 1;
			}
			if(_isReachable(a, x+1, y, m, n)==1){
				return 1;
			}
			return 0;
		}
		return 0;
	}
	return 0;
}

int isReachable(vector<vector<int> > &a, int m, int n){
	return _isReachable(a, 0, 0, m, n);
}

int main(){
	int rows, columns;
	cin>>rows>>columns;
	vector<vector<int> > a(rows);
	for(int i=0; i<rows; i++){
		a[i].resize(columns);
		for(int j=0; j<columns; j++){
			cin>>a[i][j];
		}
	}
	
	int result=isReachable(a, rows, columns);
	if(result)
 	    cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
	
	return 0;
}
