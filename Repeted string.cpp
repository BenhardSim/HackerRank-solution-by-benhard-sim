/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 

int main(){
	
	string word;
	LL n,num=0,total,s;
	cin >> word >> n;
	for(int i=0;i<word.length();i++){
		if(word[i] == 'a')num++;
	}
	total = num*floor(n/word.length());
	s = n - (word.length() * (n/word.length()));
	for(int i=0;i<s;i++){
		if(word[i] == 'a')total++;
	}
	cout << total;


	return 0;

}
