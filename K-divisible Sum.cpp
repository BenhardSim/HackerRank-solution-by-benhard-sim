/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 

LL count(){
	double n,k,extra=0;
	double total;
	cin >> n >> k;
	
	if(n<k){
		extra = k-n;
		total = ceil(extra/n) + 1;
	}
	else total = ceil(n/k);
//	else extra = (n + (k-(n-k)))-n;
	if(n==k)total=1;
	return total;
	
}

int main(){
	
	LL t;
	cin >> t;
	while(t--){
		cout << count() << "\n";	
	}
	
	return 0;
}
