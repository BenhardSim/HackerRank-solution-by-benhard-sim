/*By : Benhard Sim*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define LL long long 

int main(){
	
	LL h,w,area=0,maxV=0;
	cin >> h >> w;
	LL stk[h+2][w+2] = {0};
	for(LL i=0;i<h;i++){
		for(LL j=0;j<w;j++){
			int temp;
			cin >> temp;
			stk[i][j] = temp;
			if(stk[i][j] > maxV)maxV=stk[i][j];
		}
	}
	vector<LL> test;
	test.push_back(10);
	area = h*w;
	for(int k=0;k<maxV;k++){
		for(LL i=0;i<h;i++){
			for(LL j=0;j<w;j++){
				if(stk[i][j] > 0){
					/*up*/
					if(stk[i+1][j] < 1 || i+1 >= h)area++;
					/*down*/
					if(stk[i-1][j] < 1 || i-1 < 0)area++;
					/*right*/
					if(stk[i][j+1] < 1 || j+1 >= w)area++;
					/*left*/
					if(stk[i][j-1] < 1 || j-1 < 0)area++;
				}
				
				
			}
		}
		for(LL i=0;i<h;i++){
			for(LL j=0;j<w;j++){
				stk[i][j]--;
			}
		}
		for(LL i=0;i<h;i++){
			for(LL j=0;j<w;j++){
				if(stk[i][j] == 0)area++;
			}
		}
	}
	cout << area;
	
	return 0;
}

