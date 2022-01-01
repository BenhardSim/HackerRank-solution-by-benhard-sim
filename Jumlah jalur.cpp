#include <bits/stdc++.h>
using namespace std;

const int mxn = 1e3+5;
const int mod = 1e9+7;
int a[mxn][mxn];
 
int main() {
	int n;
	scanf("%d", &n);
	vector<string> s(n);
	for(int i=0; i<n; i++) cin >> s[i];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) {
			a[i][j]=0;
		}
	}
	
	if(s[0][0]=='.') a[1][1] = 1;
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			if(s[i-1][j-1]=='.') {
				a[i][j] += a[i-1][j] + a[i][j-1];
				a[i][j] %= mod;
			}
		}
	}
	printf("%d\n", a[n][n]);
	
	return 0;
}
