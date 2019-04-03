#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n), d(n);
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<n; i++)
			cin>>d[i];
		int max=0, flag=0;
		for(int i=0; i<n; i++){
			if((a[(i-1+n)%n]+a[(i+1)%n])<d[i]){
				if(d[i]>max)
                    max=d[i];
				flag++;
			}
		}
		if(!flag)
  		    cout<<"-1"<<endl;
		else
			cout<<max<<endl;
	}
	return 0;
}
