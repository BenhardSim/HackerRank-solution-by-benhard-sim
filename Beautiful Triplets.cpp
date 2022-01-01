/*By : Benhard Sim*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define LL unsigned long long 
#define pb(x) push_back(x);

int main(){

	LL n,d,count=0;
	
	cin >> n >> d;
	vector<LL> arr(n+1);
	for(LL i=0;i<n;i++){
		cin >> arr[i];
		cin.clear();
	}
	
	for(LL i=1;i<n-1;i++){
		LL temp1=0,temp2=0;
		/*left search*/
		for(LL j=0;j<i;j++){
			if(arr[i]-arr[j] == d)temp1++;
		}
		/*right search*/
		for(LL j=i+1;j<n;j++){
			if(arr[j]-arr[i] == d)temp2++;
		}
		if(temp1!=0 && temp2!= 0){
			count+=max(temp1,temp2);
		}
		
	}

	cout << count;
	
	return 0;
}
