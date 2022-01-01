/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

int main(){
	
	LL n,k;
	cin >> n >> k;
	vector<LL> arr;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		arr.pb(temp);
	}
	sort(arr.begin(),arr.end());
	LL j = 0,cost=99999999999,hold;
	while(j<n && k-1+j < n){
		int maxn = arr[k-1+j];
		int minn = arr[j];
		if(maxn - minn < cost)cost = maxn - minn;
		j++;
	}
	
	cout << cost << "\n";
	
	return 0;
}
