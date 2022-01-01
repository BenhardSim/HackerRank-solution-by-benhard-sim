#include <bits/stdc++.h>
using namespace std;

#define ULLI unsigned long long int
#define LLI long long int
#define f first
#define s second 

int main(){
	
	int n,o,p;
	vector<pair<int,int> > order;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> o >> p;
		int temp = o + p;
		order.push_back(make_pair(temp,i));
	}
	sort(order.begin(),order.end());
	for(int i=0;i<n;i++){
		cout << order[i].s + 1 << " ";
	}
	
	return 0;
}
