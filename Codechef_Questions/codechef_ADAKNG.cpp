#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int r, c, k;
		cin>>r>>c>>k;
		int t, b, ri, l;
		if((r-k)>0)
	 	    t=r-k;
		else
			t=1;
		if((r+k)<=8)
	 	    b=r+k;
		else
			b=8;
		if((c-k)>0)
	 	    l=c-k;
		else
			l=1;
		if((c+k)<=8)
	 	    ri=c+k;
		else
			ri=8;
			
		cout<<(ri-l+1)*(b-t+1)<<endl;
	}
	return 0;
}
