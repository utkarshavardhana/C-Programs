#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n; 
		
		vector<int> a(n+1);
		a[0]=0;
		for(int i=1; i<=n; i++){
			cin>>a[i];
		}
		vector<int> vis(n+1, 0);
		
		long long lcm = 1;
		for(int i=1; i<=n; i++){
			long long count = 0;
			int k = i;
			do{
				if(vis[k] > 0){
					count += vis[k];
					k = i;
				}else{
					count++;
					k=a[k];
					if(k==i)
					    vis[i] = count;
				}
			}while(k!=i);
			lcm %= 1000000007;
			lcm *= (count / gcd(lcm, count));
			lcm %= 1000000007;
		}
		cout<<lcm<<endl;
	}
	return 0;
}

