#include <bits/stdc++.h>
using namespace std;

int main(){
	
	vector<int> input;
	int cost = 0,mincost=99999999;
	
	int lookup[8][9] = {
		{4,3,8,9,5,1,2,7,6},
		{4,9,2,3,5,7,8,1,6},
		{2,9,4,7,5,3,6,1,8},
		{8,3,4,1,5,9,6,7,2},
		{6,7,2,1,5,9,8,3,4},
		{6,1,8,7,5,3,2,9,4},
		{8,1,6,3,5,7,4,9,2},
		{2,7,6,9,5,1,4,3,8}
	};
	
	for(int i=0;i<9;i++){
		int temp;
		cin >> temp;
		input.push_back(temp);
	}
	
	for(int i=0;i<8;i++){
		for(int j=0;j<9;j++){
			cost+=abs(input[j]-lookup[i][j]);
		}
		if(cost<mincost)mincost=cost;
		cost=0;
	}
	
	cout << mincost;
	return 0;
}
