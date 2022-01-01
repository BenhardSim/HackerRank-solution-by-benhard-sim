/*By : Benhard Sim*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define LL unsigned long long 

void val(){
	vector<string> word;
	vector<char> text;
	int n;
	cin >> n;
	for(int i=0;i<n-2;i++){
		string temp;
		cin >> temp;
		word.push_back(temp);
	}
	
	text.push_back(word[0][0]);

	
	for(int i=1;i<n-2;i++){
		if(word[i][0] == word[i-1][1]){
			text.push_back(word[i][0]);
		}else{
			text.push_back(word[i-1][1]);
			text.push_back(word[i][0]);
		}
	}
	
	while(text.size() < n){
		text.push_back(word[n-2-1][1]);
	}
	
	for(int i=0;i<text.size();i++){
		cout << text[i];
	}
	cout << "\n";
	return ;
	
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		val();
	}
	
	return 0;
}
