/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 

int val(){
	LL n,m,k,j,val,p;
	cin >> n >> m >> k;
	/*
	m -> jumlah kartu joker
	j -> jumlah kartu joker sisa
	p -> jumlah kartu per orang
	*/
	p=n/k;
	if(m<=p)return m;
	if(m>p)j=m-p;
	return p-ceil(1.0*j/(k-1));
	
}

int main(){

	int t;
	cin >> t;
	while(t--){
		cout << val() << "\n\n";
	}

	return 0;
}
