#include <bits/stdc++.h>
using namespace std;

#define LLI long long int
#define ULLI unsigned long long int
#define s second
#define f first

int main(){
	
	ULLI t,n,m;
	vector<pair<ULLI,ULLI> > arr;
	cin >> t;
	for(ULLI i =0;i<t;i++){
		cin >> n >> m;
		arr.push_back(make_pair(n,m));
	}
	
	for(ULLI i =0;i<t;i++){
		if(arr[i].s == 1 || arr[i].f == 1){
			cout << 1 << "\n";
		}else{
			cout << 2 << "\n";
		}
	}
	
	
	
	return 0;
}
