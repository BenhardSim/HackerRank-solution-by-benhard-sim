/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

int main(){
	
	LL k,n,count;
	cin >> k >> n;
	LL grid[k+1]={0};
	for(int i=0;i<k;i++){
		cin >> grid[i];
	}
	int j=n+1;
	while(j<k){
		if(grid[j]==1){
			count++;
			j+=n+1;
		}
		else{
			for(int i=0;i<n;i++){
				if(grid[j-i] == 1){
					count++;
					j+=n+1;
					break;
				}
			}
			j++;
		}
	}
	
	if(count == 0)count = -1;
	cout << count;
	
	return 0;
}
