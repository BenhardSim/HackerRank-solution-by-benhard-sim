#include <bits/stdc++.h>
using namespace std;
#define LL long long 

int main(){
	
	
	LL n,t;
	string res="NO";
	LL next=0; 
	vector<LL> tab,grid;
	cin >> n >> t;
	for(LL i=0;i<n-1;i++){
		int temp;
		cin >> temp;
		tab.push_back(temp);
	}
	for(LL i=0;i<n-1;i++){
		next+=tab[next];
		if(next > n-1)break;
		grid.push_back(next);
	}
	
	for(LL i=0;i<grid.size();i++){
		if(t == 1 || grid[i]== t-1){
			res = "YES";
			break;
		}else{
			res = "NO";
		}
	}
	
	cout << res << " ";
	
	return 0;
}
