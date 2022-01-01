/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

void cost(){
	LL n,m,start;
	cin >> n >> m;
	vector<pair<LL,LL> >arr;
	map<LL,set<pair<LL,LL> > >dic;
	for(int i=0;i<m;i++){
		LL temp1,temp2;
		cin >> temp1 >> temp2;
		arr.pb(make_pair(temp1,temp2));
	}
	cin >> start;
	for(int i=0;i<arr.size();i++){
		dic[arr[i].first].insert(make_pair(arr[i].second,0));
		dic[arr[i].second].insert(make_pair(arr[i].first,0));
	}
	
	
	queue<pair<LL,LL>> que;
	map<LL,LL> res;
	set<LL>visited;
	pair<LL,LL> current;
	que.push(make_pair(start,0));
	res.insert(make_pair(start,0));
	while(que.size() > 0){
		current = que.front();
		visited.insert(current.first);
		que.pop();
		for(auto i=dic[current.first].begin() ; i!=dic[current.first].end() ; i++){
			if(visited.count(i->first) == 0 && res[i->first] == 0){
				que.push(make_pair(i->first,(current.second)+6));
//				res.insert(make_pair(i->first,(i->second)+6));
				res[i->first] = (current.second)+6;
			}
		}
	}
	
//	for(auto i : dic){
//		cout << i.first << " -> ";
//		for(auto j = i.second.begin(); j != i.second.end(); j++){
//			cout << "( " << (j)->first << ", " << (j)->second << " ) \n";
//		}
//		cout << "\n";
//	}
//	cout << "\nNilai Visited : \n";
//	for(auto i = res.begin();i!=res.end();i++){
//		cout << i->first << " <-> " << i->second << " \n";
//	}
//	cout << "\n\n";
//
////	for( auto i : res){
////		cout << i.first << " <-> " << i.second << "\n";
////	}
////	cout << "\n\n";
//	for(int i=1;i<=n;i++){
//		if(i!=start){
//			if(res[i] == 0)cout << -1 << " ";
//			else cout << res[i] << " ";
//		}
//	}
	cout << "\n";
	return;
	
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		cost();
	}
	
	return 0;
}
