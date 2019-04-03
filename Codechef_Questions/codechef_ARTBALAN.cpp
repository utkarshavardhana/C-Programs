#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	vector<bool> a(1000001, true);
	a[0]=false;
	a[1]=false;
	for(long int p=2; p*p<=1000000; p++){ 
        if (a[p]==true){ 
            for (long int i=p*p; i<=1000000; i+=p) 
                a[i] = false; 
        } 
	} 
	
	while(t--){
		string s;
		cin>>s;
		
		map<char, long int> m;
		for(long int i=0; i<s.size(); i++){
			m[s[i]]++;
		}
		
		long int sum=0;
		if(m.size()>(s.size()/2)){
			sum = s.size()-m.size();
		}else{
			if(a[s.size()]==true){
				sum = s.size()-m.size();
			}else{
				int aim=m.size();
				for(long int i=m.size(); i<=(s.size()/2); i++){
					if(s.size()%i==0){
						aim=i;
						break;
					}else if(i==(s.size()/2)){
						aim=i;
					}
				}
				for(map<char, long int>::iterator it=m.begin(); it!=m.end(); it++){
					if(((*it).second)>(s.size()/aim))
                        sum+=((*it).second)-(s.size()/aim);
				}
			}
		}
		cout<<sum;
	}
	return 0;
}
