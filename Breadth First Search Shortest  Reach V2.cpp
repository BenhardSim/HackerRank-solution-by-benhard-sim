/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

void cost(){
	int n,m,start;
	cin >> n >> m;
	map<LL,vector<LL>> dic;
	vector<LL> dist(n+1);
	fill(dist.begin(),dist.end(),0);
	for(int i=0;i<m;i++){
		int temp1,temp2;
		cin >> temp1 >> temp2;
		dic[temp1].pb(temp2);
		dic[temp2].pb(temp1);
	}
	cin >> start;
	
	set<LL> visited;
	queue<LL> que;
	LL current;
	que.push(start);
	while(que.size() > 0){
		current = que.front();
		visited.insert(current);
		que.pop();
		for(int i=0;i<dic[current].size();i++){
			/*masih blm di kunjungi*/
			if(visited.find(dic[current][i]) == visited.end() && dist[dic[current][i]] == 0){
				que.push(dic[current][i]);
				dist[dic[current][i]]=dist[current]+1;
			}
		}
		
	}
	
	for(int i=1;i<dist.size();i++){
		if(i!=start){
			if(dist[i] == 0)cout << "-1" << " ";
			else cout << dist[i]*6 << " ";
		}
	}
	cout << "\n";

}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		cost();
	}
	
	
	return 0;
}
