#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

int main(){
	

	vector<int> arr;
	int n,total;
	cin >> n;
	for(int i=0;i<n;i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	
	sort(arr.begin(),arr.end());
	int init=arr[0],sum=0;
	for(int i=0;i<n;i++){
		if(init==arr[i]){
			sum++;
			if(i==n-1)total += floor(sum/2);
		}else{
			init=arr[i];
			total += floor(sum/2);
			sum=1;
		}
	}
	
	cout << total << "\n";
	
	return 0;
}
