#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ULLI unsigned long long int
#define LL long long 

int main(){

	LL c,n;
	vector<ULLI> coin;
	LL ch[10000] = {0};
	cin >> c >> n;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		coin.pb(temp);
	}
	sort(coin.begin(),coin.end());
	/*kalau uang yang ada 0 dan isi array kembalian tidak ada*/
	ch[0] = 1;
	
	for(LL i=0;i<coin.size();i++){
		for(LL j=1;j<=c;j++){
			if(j>=coin[i]){
				ch[j] += ch[j-coin[i]]; 
			}
			
		}
	}
	
	cout << ch[c];
	
	
	return 0;
}
