/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

int main(){
	
	int n,k,sum;
	cin >> n >> k;
	vector<LL> num;
	map<LL,LL>val;
	for(int i=0;i<n;i++){
		LL temp;
		cin >> temp;
		num.pb(temp%k);
		val[temp%k]++;
	}
	if(k == 0 || k == 1){
		cout << 1;
		return 0;
	}
	if(val[0] != 0)sum++;
	for(int i=1;i<k/2+1;i++){
		if(i!=k-i)sum+=max(val[i],val[k-i]);
	}
	if(k%2 == 0)sum++;
	cout << sum;
	
	
	
	return 0;
}
