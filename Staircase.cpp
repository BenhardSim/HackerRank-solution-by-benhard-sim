/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

int main(){
	
	int n;
	cin >> n;
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<n;j++){
			if(j>=i)cout << "#";
			else cout << " ";
		}
		cout << "\n";
	}
	
	
	return 0;
}
