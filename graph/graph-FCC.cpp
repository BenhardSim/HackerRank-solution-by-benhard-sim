/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x);

vector<char> depthFTrans(map<char,vector<char> > adlist,char src){
	stack<char> stck;
	vector<char> val;
	char current;
	stck.push(src);
	while(stck.size() > 0){
		current = stck.top();
		stck.pop();
		val.push_back(current);
		for(int i=0;i<adlist[current].size();i++){
			stck.push(adlist[current][i]);
		}
	}
	
	return val;
}

vector<char> breathFTrans(map<char,vector<char> > adlist,char src){
	queue<char> que;
	vector<char> val;
	char current;
	que.push(src);
	while(que.size() > 0){
		current = que.front();
		que.pop();
		val.push_back(current);
		for(int i=0;i<adlist[current].size();i++){
			que.push(adlist[current][i]);
		}
	}
	return val;
}

bool hashPathDFT(map<char,vector<char> > adlist, char src,char dst){
	stack<char> stk;
	set<char> visited;
	char current;
	stk.push(src);
	while(stk.size()>0){
		current = stk.top();
		visited.insert(current);
		if(dst == current)return true;
		stk.pop();
		for(int i=0;i<adlist[current].size();i++){
			if(visited.find(adlist[current][i]) == visited.end())
				stk.push(adlist[current][i]);
		}
	}
	return false;
}

bool undirectedPath(map<char,vector<char> > adlist, char src,char dst){
	return hashPathDFT(adlist,src,dst);
}

map<LL,vector<LL> > convertList(vector<vector<LL> > list){
	map<LL, vector<LL> > adlist;
	for(int i=0;i<list.size();i++){
		adlist[list[i][0]].pb(list[i][1]);
		if(list[i][1] != NULL)adlist[list[i][1]].pb(list[i][0]);
	}
	
	return adlist;
}

int largestConnect(map<LL,vector<LL> > addlist,int start){
	set<LL> visited;
	int largest = 0;
	
	for(auto j : addlist){
		int current;
		if(visited.count(j.first) > 0)break;
		int temp = 0;
		queue<LL> que;
		que.push(j.first);
		while(que.size() > 0){
			current = que.front();
			que.pop();
			visited.insert(current);
			for(int i=0;i<addlist[current].size();i++){
				if(visited.count(addlist[current][i]) == 0){
					que.push(addlist[current][i]);
					temp++;
				}
			}
		}
		if(temp > largest)largest = temp;
		
	}
	
	return largest;
	
}

int connectCount(map<LL,vector<LL> > addlist,int start){
	int count = 0;
	set<LL> visited;
	set<set<LL>> group;
	for(auto j : addlist){
		
		set<LL> temp;
		if(visited.count(j.first) == 0){
			count++;
		}
		
		int current;
		queue<LL> que;
		que.push(j.first);
		while(que.size() > 0){
			current	= que.front();
			que.pop();
			visited.insert(current);
			
			for(int i=0;i<addlist[current].size();i++){
				if(visited.count(addlist[current][i]) == 0){
					que.push(addlist[current][i]);
					if(addlist[current][i] != NULL){
						temp.insert(addlist[current][i]);
					}
					temp.insert(current);
					
				}
			}
		}
		group.insert(temp);
	}

	return count;
	
}


int main(){
	map<LL,vector<LL>> input,input2,input3;
	map<char,vector<char> > adlist,adlist2,adlist3;
	adlist.insert(pair<char,vector<char> >('a',{'c','b'}));
	adlist.insert(pair<char,vector<char> >('b',{'d'}));
	adlist.insert(pair<char,vector<char> >('c',{'e'}));
	adlist.insert(pair<char,vector<char> >('d',{'f'}));
	adlist.insert(pair<char,vector<char> >('e',{}));
	adlist.insert(pair<char,vector<char> >('f',{}));
	
	adlist2.insert(pair<char,vector<char> >('f',{'g','i'}));
	adlist2.insert(pair<char,vector<char> >('g',{'h'}));
	adlist2.insert(pair<char,vector<char> >('i',{'g','k'}));
	adlist2.insert(pair<char,vector<char> >('j',{'i'}));
	
	adlist3.insert(pair<char,vector<char> >('i',{'j','k'}));
	adlist3.insert(pair<char,vector<char> >('j',{'i','k'}));
	adlist3.insert(pair<char,vector<char> >('k',{'i','m','l','j'}));
	adlist3.insert(pair<char,vector<char> >('m',{'k'}));
	adlist3.insert(pair<char,vector<char> >('l',{'k'}));
	adlist3.insert(pair<char,vector<char> >('o',{'n'}));
	adlist3.insert(pair<char,vector<char> >('n',{'o'}));
	
	input3.insert(pair<LL,vector<LL>>{0,{8,1,5}});
	input3.insert(pair<LL,vector<LL>>{1,{0}});
	input3.insert(pair<LL,vector<LL>>{5,{0,8}});
	input3.insert(pair<LL,vector<LL>>{8,{0,5}});
	input3.insert(pair<LL,vector<LL>>{2,{3,4}});
	input3.insert(pair<LL,vector<LL>>{3,{2,4}});
	input3.insert(pair<LL,vector<LL>>{4,{3,2}});
	
	
	input = convertList({{1,2},{3,4},{5,6},{5,1},{2,6}});
	input2 = convertList({{1,2},{4,6},{5,6},{6,8},{6,7},{3,NULL}});
	
	for(auto i : input2){
		cout << i.first << " -> ";
		for(int j=0;j<i.second.size();j++){
			cout << i.second[j] << " ";
		}
		cout << "\n";
	}
	
	for(int i=0;i<6;i++){
		cout << depthFTrans(adlist,'a')[i] << " ";
	}
	cout << "\n";
	for(int i=0;i<6;i++){
		cout << breathFTrans(adlist,'a')[i] << " ";
	}
	
	cout << "\n";
	cout << hashPathDFT(adlist2,'f','k');
	cout << "\n";
	cout << undirectedPath(adlist3,'i','j');
	cout << "\n";
	cout << connectCount(input2,1);
	cout << "\n\n";
	cout << largestConnect(input,1);
	
	
	
	return 0;
}
