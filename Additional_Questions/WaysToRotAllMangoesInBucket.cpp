#include <bits/stdc++.h>
using namespace std;

/*
  This program outputs number of steps require to rot the entire matrix off apples.
  Here, 0 means empty bobx, 1 means good mango, 2 means rotten mango.
  A rotten mango can rot it's neighbours by a unit distance,  but not diagonally.
  Return -1 if not possible to rot entire matrix
*/

int main() {
	int t;
	cin>>t;
	while(t--){
	    int r, c;
	    cin>>r>>c;
	    vector<vector<int> > a(r);
	    vector<int> twos;
	    set<int> ones;
	    for(int i=0; i<r; i++){
	        a[i].resize(c);
	        for(int j=0; j<c; j++){
	            cin>>a[i][j];
	            if(a[i][j] == 1){
	                ones.insert(i*10+j);
	            }else if(a[i][j] == 2){
	                twos.push_back(i*10+j);
	            }
	        }
	    }
	    if(a.size() == 1 && a[0].size() == 1){
	        if(a[0][0] == 2 || a[0][0] == 0){
	            cout<<"0"<<endl;
	        }else{
	            cout<<"-1"<<endl;
	        }
	    }else if(twos.size() == 0){
	        if(ones.size() == 0){
	            cout<<"0"<<endl;
	        }else{
	            cout<<"-1"<<endl;
	        }
	    }else{
	        int count = 0;
    	    while(1){
    	        vector<int> newTwos;
    	        for(int i=0; i<twos.size(); i++){
    	            int x = twos[i]/10;
    	            int y = twos[i]%10;
    	            if(x!=0 && a[x-1][y] == 1){
    	                a[x-1][y] = 2;
    	                newTwos.push_back((x-1)*10+y);
    	                ones.erase((x-1)*10+y);
    	            }else if(x!=(r-1) && a[x+1][y] == 1){
    	                a[x+1][y] = 2;
    	                newTwos.push_back((x+1)*10+y);
    	                ones.erase((x+1)*10+y);
    	            }else if(y!=0 && a[x][y-1] == 1){
    	                a[x][y-1] = 2;
    	                newTwos.push_back((x)*10+y-1);
    	                ones.erase(x*10+y-1);
    	            }else if(y!=(c-1) && a[x][y+1] == 1){
    	                a[x][y+1] = 2;
    	                newTwos.push_back((x)*10+y+1);
    	                ones.erase(x*10+y+1);
    	            }
    	        }
    	        count++;
    	        if(newTwos.size() > 0){
    	            twos = newTwos;
    	        }else{
    	            break;
    	        }
    	    }
    	    if(ones.size()){
    	        cout<<"-1"<<endl;
    	    }else{
    	        cout<<count<<endl;
    	    }
	    }
	}
	return 0;
}
