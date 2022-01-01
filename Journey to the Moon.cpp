/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)

int main(){
	
	LL n,p;
	cin >> n >> p;
	map<LL,vector<LL>> adlist;
	vector<LL> member;
	
	for(LL i=0;i<p;i++){
		LL temp1,temp2;
		cin >> temp1 >> temp2;
		adlist[temp1].pb(temp2);
		adlist[temp2].pb(temp1);
	}
	set<LL> visited;
	for(auto j: adlist){
		
		if(visited.count(j.first) > 0)continue;
		if(j.second.size() == 0){
			member.pb(1);
			continue;
		}
		
		stack<LL> que;
		que.push(j.first);
		LL current;
		LL count = 1;
		
		while(que.size() > 0){
			current = que.top();
			que.pop();
			visited.insert(current);
			for(LL i=0;i<adlist[current].size();i++){
				/*check if already visited*/
				if(visited.count(adlist[current][i]) == 0){
					visited.insert(adlist[current][i]);
					que.push(adlist[current][i]);
					count++;
				}
			}
		}
		member.pb(count);
		
	}

	LL oneEl = n - visited.size();
	LL per = 0;
	for(int i=0;i<member.size();i++){
		per += member[i]*oneEl;
	}

	per+=((oneEl*(oneEl-1))/2);
	/*counting permutation*/
	for(LL i=0;i<member.size();i++){
		for(LL j=i+1;j<member.size();j++){
			per+=member[i]*member[j];
		}
	}
	
	cout << per;
	
	return 0;
}










