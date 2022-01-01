/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 

LL cost(){
	LL n,m,x,y;
	LL total=0;
	string ss;
	cin >> n >> m >> x >> y;
	for(int i=0;i<n;i++){
		cin >> ss;
		for(int j=0;j<m;j++){
			if(ss[j] == '.' && ss[j+1]=='.' && 2*x > y){
				total+=y;
				j++;
			}else if(ss[j] == '.')total+=x;
		}
	}

	return total;
	
}

int main(){
	
	LL t;
	cin >> t;
	while(t--){
		cout << cost() << "\n";
	}
	
	return 0;
}
