#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ULLI unsigned long long int
#define LL long long 

int main(){
	
	int n1,n2;
	/*n1 > n2*/
	vector<char> s1,s2;
	cin >> n1 >> n2;
	for(int i=0;i<n1;i++){
		int temp;
		cin >>  temp;
		s1.pb(temp);
	}
	for(int j=0;j<n2;j++){
		int temp;
		cin >>  temp;
		s2.pb(temp);
	}
	int len=0;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(s1[i]!=s2[j])break;
			else len++;
		}
	}	
	cout << len << "\n";
	if(len=n2)cout << "YES";
	else "NO";
	
	return 0;
}









