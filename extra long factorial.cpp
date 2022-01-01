/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long 
#define pb(x) push_back(x)

ULL fac(ULL n){
	ULL arr[1000] = {1};
	arr[0] = 1;
	arr[1] = 1;
	for(int i=2;i<=n;i++){
		arr[i] = i * arr[i-1];
	}

	return arr[n];
}

int main(){
	
	ULL n;
	cin >> n;
	cout << fac(n);
	
	return 0;
}
