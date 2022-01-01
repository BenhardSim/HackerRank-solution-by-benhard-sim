/*By : Benhard Sim*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define LL unsigned long long 

void val(){
	LL num[8];
	for(int i=0;i<7;i++){
		cin >> num[i];
	}
	if(num[0]+num[1] == num[2])cout << num[0] << " " << num[1] << " " << num[3];
	else cout << num[0] << " " << num[1] << " " << num[2];
	cout << "\n";
}


int main(){
	
	LL n;
	cin >> n;
	while(n--){
		val();
	}
	
	
	return 0;
}
