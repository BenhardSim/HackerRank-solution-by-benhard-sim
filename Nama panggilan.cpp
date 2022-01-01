#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ULLI unsigned long long int
#define LL long long 

int main(){
	/*
	unarmedqueue
	
	12 3
	unarmedqueue
	
	11 3
	mdrqnxtagon
	
	4 3
	aaab
	
	*/
	
	int n,k,done=0;
	string vocal = "aiueo";
	vector<char> word;
	cin >> n >> k;
	for(int i=0;i<n;i++){
		char temp;
		cin >> temp;
		word.pb(temp);
	}
	int len1 = 0,len2 = 0,max1=0,max2=0;
	for(int i=0;i<n;i++){
		if(vocal.find(word[i]) < vocal.length()){
			len1++;
			if(len1 > max1)max1 = len1;
			len2=0;
		}else{
			len2++;
			if(len2 > max2)max2 = len2;
			len1=0;
			
		}
	}
	
	cout << max1 << " " << max2;
	if(max1 >= k || max2 >= k) cout << "NO";
	else cout << "YES";
	

	return 0;
}
