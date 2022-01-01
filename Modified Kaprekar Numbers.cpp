/*By : Benhard Sim*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define LL unsigned long long 
#define pb(x) push_back(x)

int main(){
	
	LL p,q;
	cin >> p >> q;
	vector<LL> res;
	for(LL i=p;i<=q;i++){
		LL sqr = i*i;
		LL len = to_string(sqr).length();
		if(len%2==0)len/=2;
		else len = (len+1)/2;
		
		LL div = pow(10,len);
		LL numL = floor(sqr/div);
		LL numR = sqr%div;
		
		if(numL + numR == i)res.pb(i);
	}
	
	for(int i=0;i<res.size();i++){
		cout << res[i] << " ";
	}
	
	if(res.size() == 0)cout << "INVALID RANGE";
	
	return 0;
}
