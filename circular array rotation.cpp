#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main(){
	
	int n,k,q;
	vector <int> arr,idx;
	cin >> n >> k >> q;
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	for(int i=0;i<q;i++){
		int temp;
		cin >> temp;
		idx.push_back(temp);
	}
	vector <int> newarr(n);
	for(int i=0;i<n;i++){
		newarr[(i+k)%n] = arr[i];
	}
	for(int i=0;i<q;i++){
		cout << newarr[idx[i]] << "\n";
	}
	
	return 0;
}
