/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

LL todes(string str){
	LL des = 0;
	for(int i=str.length()-1;i>=0;i--){
		if(str[str.length()-1-i] == '1')des+=pow(2,i);
	}
	
	return des;
}

int main(){
	
	int n,m;
	cin >> n >> m;
	int can[m+1];
	vector<LL> des;
	vector<string> bin;
	for(int i=0;i<n;i++){
		string temp;
		LL tempdes;
		cin >> temp;
		bin.pb(temp);
		tempdes = todes(temp);
		des.pb(tempdes);	
	}
	for(int i=0;i<n;i++){
		cout << des[i] << " ";
	}
	cout << todes("10101");
	
	return 0;	
}
