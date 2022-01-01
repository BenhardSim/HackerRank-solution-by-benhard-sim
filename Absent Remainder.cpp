/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
LL arr[1000000];

int main(){
	LL t;
	cin >> t;
	while(t--){
		LL n;
		cin >> n;
		for(LL i=0;i<n;i++)cin >> arr[i];
		sort(arr,arr+n);
		for(LL i=1;i<=n/2;i++){
			cout << arr[i] << " " << arr[0] << "\n"; 
		}
		
	}
	
	return 0;
}
