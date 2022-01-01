#include <bits/stdc++.h>
using namespace std;

int findit(string n,map<string, int> memo){
	memo["h5"] = 200;
	if(memo.count("h5")){
		cout << "heyyy";
		return memo.at("h5");
	}
	return 0;
}

int fib(int n,map<int,int> memo){
	int temp;
	if(memo.count(n)){
		return memo.at(n);
	}
	if(n <= 2) return 1;
	temp = fib(n-1,memo) + fib(n-2,memo);
	memo[n] = temp;
	return memo[n];
}

int main(){

	map <string,int> memo;
	map <int,int> memo2;
	map <int,int> memo3;
	int x=2,y=18;
	memo.insert(pair<string,int>("ben",6));
	
	memo["h1"] = 30;
	memo["h2"] = 40;
	memo["h3"] = 50;
	memo["h4"] = 60;
	memo2[3] = 100;
	
	
	if(memo.count("h2")){
		cout << "YESSSS\n";
		cout << memo.at("h2") << endl;
	}
	if(memo2.count(3)){
		cout << memo2.at(3);
	}
	cout << "\n";
	cout << "VAL : " << findit("h4",memo) << "\n";
	cout << fib(50,memo3);

	
	return 0;
}
