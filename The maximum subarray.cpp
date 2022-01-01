#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ULLI unsigned long long int
#define LL long long 

int maxsub(vector <LL> arr){
	LL currentmax = arr[0];
	LL globalmax = arr[0];
	for(int i=1;i<arr.size();i++){ 	
		currentmax = max(arr[i],currentmax+arr[i]);
		if(currentmax > globalmax)globalmax = currentmax;
	}
	return globalmax;
}

int noneg(vector <LL> arr){
	LL maxval = 0;
	for(LL i =0;i<arr.size();i++){
		if(arr[i] > 0)maxval+=arr[i];
	}
	return maxval;
}

int main(){
	
	int q,n,submax,maxval;
	vector<LL> arr;
	cin >> q;
	while(q--){
		cin >> n;
		for(int i=0;i<n;i++){
			int temp;
			cin >> temp;
			arr.pb(temp);
		}
		
		
		maxval = noneg(arr);
		submax = maxsub(arr);
		if(maxval == 0)maxval = *max_element(arr.begin(),arr.end());
		if(submax == 0)submax = maxval;
		cout << submax << " " << maxval << "\n";
		arr.clear();
	}
	
	
	return 0;
}
