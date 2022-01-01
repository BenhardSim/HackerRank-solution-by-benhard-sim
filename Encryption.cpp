/*By : Benhard Sim*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define LL long long 

int main(){
	
	string word;
	cin >> word;
	LL rows = floor(sqrt(word.length()));
	LL col = ceil(sqrt(word.length()));
	if(rows*col < word.length())rows++;
	for(int j=0;j<col;++j) {
        for(int i=j; i<word.length();i+=col)cout << word[i];
        cout << ' ';
    }
	
	return 0;
}
