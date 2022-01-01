#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ULLI unsigned long long int
#define LL long long 
#first f
#second s

int main(){
	
	/*
	10
	beabeefeab
	*/
	
	vector<char> word;
	vector<pair<char,char> > comb;
	set<char> letter;
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		char temp;
		cin >> temp;
		word.pb(temp);
		letter.insert(temp);
	}
	
	for(auto i=letter.begin();i!=letter.end();i++){
		for(auto j=letter.begin();j!=letter.end();j++){
			comb.pb(make_pair(*i,*j));
		}
	}
	
	

		
	return 0;
}
