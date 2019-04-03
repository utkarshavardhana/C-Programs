#include <iostream>
#include <vector>

using namespace std;
int main(){
/*
  A program to show a number as the sum of two prime numbers.
*/
	int t;
	cin>>t;
	int n;
	while(t--){
		cin>>n;
		vector<bool> a(n, true);
		a[0]=false;
		a[1]=false;
		for(int p=2; p*p<=n; p++){ 
	        if (a[p]==true){ 
	            for (int i=p*p; i<=n; i+=p) 
	                a[i] = false; 
	        } 
		} 
		for(int p=2; p<n; p++){
			if(a[p]==true && a[n-p]==true){
				cout<<p<<" + "<<n-p<<" = "<<n<<endl;
				break;
			}else if(p==n/2){
				cout<<"Well! that's a prime number!!!"<<endl;
				break;
			}
		}
	}
	return 0;
}
