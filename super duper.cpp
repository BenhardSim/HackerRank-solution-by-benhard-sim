#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n,neg,n2;
	vector<int> arr;
	cin >> n;
	n2 = 2*n-1;
	for(int i=0;i<n2;i++){
		int temp;
		cin >> temp;
		if(temp < 0)neg++;
		arr.push_back(temp);
	}
	int total;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n2;i++){
		if(arr[i] < 0 && neg>=n && i < n){
			total += abs(arr[i]);
		}else{
			total += arr[i];
		}
	}
	
	cout << total << "\n";
	
	return 0;
}
