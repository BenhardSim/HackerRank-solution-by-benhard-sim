/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

int main(){
	
	LL n,total;
	cin >> n;
	vector<LL> can,val(n),val2(n);
	fill(val.begin(),val.begin()+n,1);
	fill(val2.begin(),val2.begin()+n,1);
	for(int i=0;i<n;i++){
		LL temp;
		cin >> temp;
		can.pb(temp);
	}
	for(int i=1;i<n;i++){
		if(can[i] > can[i-1])val[i]+=val[i-1];
	}
	for(int i=2;i<=n;i++){
		if(can[n-i] > can[n-i+1])val2[n-i]+=val2[n-i+1];
	}
	total = 0;
	for(LL i=0;i<n;i++){
		if(val[i] == val2[i])total+=val[i];
		else total+=max(val[i],val2[i]);
	}
	cout <<  total;
	
	
	return 0;
}
