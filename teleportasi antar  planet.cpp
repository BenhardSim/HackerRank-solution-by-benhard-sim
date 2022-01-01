#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ULLI unsigned long long int
#define LL long long 

int main(){
	
	/*
	4 1
	2 1 1 4
	3 4
	
	4 1
	2 1 1 4
	1 2
	
	4 1
	2 1 1 4
	4 1
	
	4 3
	2 1 1 4
	1 2
	3 4
	4 1
	*/
	
	LL n,q,x,k;
	vector<LL> pos;
	cin >> n >> q;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		pos.pb(temp);
	}
	
//	for(int i=0;i<n;i++){
//		cout << pos[i] << " ";
//	}
	while(q--){
		cin >> x >> k;
		LL now=0,next=x;
//		cout << pos[x-1];
		for(LL i=0;i<k;i++){
			if(pos[next-1] == next){
				next=pos[next-1];
				break;
			}else{
				next=pos[next-1];
			};
			
			
			
//			next=pos[now-1];
//			cout << now << " " << next << " ";
		}
		cout << next << "\n";
		now = 0;
		next = 0;
		
	}
	
	return 0;
}
