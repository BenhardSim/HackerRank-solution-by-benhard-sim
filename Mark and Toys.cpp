/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

int main(){
	
	vector<LL> price;
	LL n,k,total;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		price.pb(temp);
	}
	sort(price.begin(),price.end());
	LL j=0;
	while(total<=k && j<n){
		total+=price[j];
		j++;
	}
	cout << j;
	
	
	return 0;
}
