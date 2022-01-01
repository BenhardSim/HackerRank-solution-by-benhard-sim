/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x);


int shortestPath(map<char,vector<char> > adlist,char nodeA,char nodeB){
	map<char,int> dist;
	dist[nodeA] = 0;
	
	set<char> visited;
	queue<char>que;
	que.push(nodeA);
	char current;
	while(que.size() > 0){
		current = que.front();
		que.pop();
		visited.insert(current);
		for(int i=0;i<adlist[current].size();i++){
			if(visited.count(adlist[current][i]) == 0){
				visited.insert(adlist[current][i]);
				que.push(adlist[current][i]);
				dist[adlist[current][i]] = dist[current] + 1;
			}
		}	
	}
	
	return dist[nodeB];
}

int main(){
	
	map<char,vector<char> > adlist;
	adlist.insert(pair<char,vector<char> >('w',{'x','v'}));
	adlist.insert(pair<char,vector<char> >('x',{'w','y','v'}));
	adlist.insert(pair<char,vector<char> >('y',{'x','z'}));
	adlist.insert(pair<char,vector<char> >('z',{'y','v'}));
	adlist.insert(pair<char,vector<char> >('v',{'w','z','x'}));
	
	cout << shortestPath(adlist,'w','z') << "\n";
	
	return 0;
}








