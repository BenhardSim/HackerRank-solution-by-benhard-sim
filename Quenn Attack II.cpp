/*By : Benhard Sim*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define LL unsigned long long 

int main(){
	/*
	4 0 
	2 2
	*/
	int n,k,rq,cq;
	set<pair<LL,LL>> obs;
	cin >> n >> k;
	cin >> rq >> cq;
	for(int i=0;i<k;i++){
		LL temp1,temp2;
		cin >> temp1 >> temp2;
		obs.insert(make_pair(temp1,temp2));
	}
	LL count = 0;
	LL i=rq+1,j;
	pair<LL,LL> testPair;
	/*upper vertical*/
	while(i<=n){
		testPair = make_pair(i,cq);
		if(obs.count(testPair) > 0)break;
		count++;
		i++;
	}
	
	/*bottom vertical*/
	i=rq-1;
	while(i>=1){
		testPair = make_pair(i,cq);
		if(obs.count(testPair) > 0)break;
		count++;
		i--;
	}
	
	/*right side horizontal*/
	i=cq+1;
	while(i<=n){
		testPair = make_pair(rq,i);
		if(obs.count(testPair) > 0)break;
		count++;
		i++;
	}
	
	/*left side horizontal*/
	i=cq-1;
	while(i>=1){
		testPair = make_pair(rq,i);
		if(obs.count(testPair) > 0)break;
		count++;
		i--;
	}
	
	/*diagonal up right*/
	i = rq+1;
	j = cq+1;
	while(i <= n && j <= n){
		testPair = make_pair(i,j);
		if(obs.count(testPair) > 0)break;
		count++;
		i++;
		j++;
	}
	
	/*diagonal up left*/
	i = rq+1;
	j = cq-1;
	while(i <= n && j >= 1){
		testPair = make_pair(i,j);
		if(obs.count(testPair) > 0)break;
		count++;
		i++;
		j--;
	}
	
	/*diagonal down right*/
	i = rq-1;
	j = cq+1;
	while(i >= 1 && j <= n){
		testPair = make_pair(i,j);
		if(obs.count(testPair) > 0)break;
		count++;
		i--;
		j++;
	}

	/*diagonal down left*/
	i = rq-1;
	j = cq-1;
	while(i >= 1 && j >= 1){
		testPair = make_pair(i,j);
		if(obs.count(testPair) > 0)break;
		count++;
		i--;
		j--;
	}
	cout << count;
	
	return 0;
}
