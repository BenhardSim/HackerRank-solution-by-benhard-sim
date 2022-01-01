/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

string val(){
	int n,k;
	cin >> n >> k;
	vector<LL> arrA,arrB;
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		arrA.pb(temp);
	}
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		arrB.pb(temp);
	}
	sort(arrA.begin(),arrA.end());
	sort(arrB.begin(),arrB.end(),greater<>());
	for(int j=0;j<n;j++){
		if(arrA[j] + arrB[j] < k)return "NO";
	}
	return "YES";
}



int main(){
	
	int t;
	cin >> t;
	while(t--){
		cout <<	val() << "\n";
	}
	
	return 0;
}
