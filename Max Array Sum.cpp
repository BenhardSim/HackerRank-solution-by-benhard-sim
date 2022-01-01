/*By : Benhard Sim*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define LL long long 

int main(){
	
	int n;
	cin >> n;
	LL arr[n+1];
	for(LL i=0;i<n;i++){
		cin >> arr[i];
	}
	
	LL dic[n+1];
	/*base cases*/
	dic[0] = arr[0];
	dic[1] = max(arr[0],arr[1]);
	
	for(LL i=2;i<n;i++){
		dic[i] = max(dic[i-1],max(arr[i] + dic[i-2],arr[i]));
	}
	cout << *max_element(dic,dic+n);
	
	return 0;
}









