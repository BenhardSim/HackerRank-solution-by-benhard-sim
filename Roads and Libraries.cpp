/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

map<LL,vector<LL>> convertNode(vector<pair<LL,LL>> node , LL num){
	map<LL,vector<LL>> adlist;
	
	for(LL i=1;i<=num;i++){
		adlist[i];
	}
	for(LL i=0;i<node.size();i++){
		adlist[node[i].first].pb(node[i].second);
		adlist[node[i].second].pb(node[i].first);		
	}
	
	return adlist;
}

LL cost(){

	LL total=0, n,m,cl,cr;
	cin >> n >> m >> cl >> cr;
	vector<pair<LL,LL>> node;
	map<LL,vector<LL>> adlist;
	vector<LL> nodeCost;
	
	for(int i=0;i<m;i++){
		LL temp1,temp2;
		cin >> temp1 >> temp2;
		node.pb(make_pair(temp1,temp2));
	}
	
	adlist = convertNode(node,n);
	
	set<LL> visited;
	for(auto j : adlist){
		
		if(visited.count(j.first) > 0)continue;
		queue<LL>que;
		LL current;
		que.push(j.first);
		int count = 1;
		
		while(que.size() > 0){
			current = que.front();
			que.pop();
			visited.insert(current);
			for(int i=0;i<adlist[current].size();i++){
				if(visited.count(adlist[current][i]) == 0){
					que.push(adlist[current][i]);
					visited.insert(adlist[current][i]);
					count++;
				}
			}
		}
		nodeCost.pb(count);
		
	}

	
	for(int i=0;i<nodeCost.size();i++){
		total+= min((nodeCost[i]-1)*cr + cl,nodeCost[i]*cl);
	}
	
	return total;

}



int main(){
	
	LL q;
	cin >> q;
	
	while(q--){
		cout << cost() << "\n";
	}
	
	
	return 0;
}
