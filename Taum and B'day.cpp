/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

LL cost(){
	
	LL b,w,bc,wc,z,total,bw,wb,ss;
	cin >> b >> w >> bc >> wc >> z;
	total = b + w;
	bw = total*bc+w*z;
	wb = total*wc+b*z;
	ss = b*bc+w*wc;
	return min({bw,wb,ss});
	
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		cout << cost() << "\n";
	}
	return 0;
}
