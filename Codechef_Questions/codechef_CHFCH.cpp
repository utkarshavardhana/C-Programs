#include <bits/stdc++.h>
using namespace std;

const int MX = (1<<20);
long long sum[MX];

long long get(int l , int r){
    if(r < 0 || l > r){
    	return 0;
	}
    long long ret = sum[r];
    if(l > 0){
    	ret -= sum[l-1];
	}
    return ret;
}

long long process(vector < int > v , int K){
    long long ret = (1ll << 60);
    if(K > v.size()){
    	return ret;
	}
    sum[0] = v[0];
    sum[v.size()] = 0;
    for(int j = 1 ; j < v.size() ; j++){
    	sum[j] = v[j] + sum[j-1];
	}
    for(int j = 0 ; j + K <= v.size() ; j++){
        long long l = j , r = j - 1 + K , mid = (l + r)/2;
        long long leftcost = (mid - l) * v[mid] - ((mid - l) * (mid - l + 1))/2 - get(l , mid - 1);
        long long rightcost = get(mid + 1 , r) - (r - mid) * v[mid] - ( (r - mid) * (r - mid + 1) / 2);
        ret = min(ret , leftcost + rightcost);
    }
    return ret;
}

vector <int> v[MX];
int n , arr[MX] , K , T;

int main(){
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&n,&K);
        set <int> S;
        for(int j = 1 ; j <= n ; j++){
            scanf("%d",&arr[j]);
            S.insert(arr[j]);
            v[arr[j]].clear();
        }
        for(int j = 1 ; j <= n ; j++){
            v[arr[j]].push_back(j);
        }
        long long ans = (1ll << 60);
        for(auto x : S)
            ans = min(ans , process(v[x] , K));
        if(ans == (1ll << 60)){
            ans = -1;
        }
        cout<<ans<<endl;
    }

}
