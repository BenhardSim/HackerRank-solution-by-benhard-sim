#include <bits/stdc++.h>
using namespace std;
#define LLI long long int

bool bruteforce(string a, string b){
	int size=0;
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			if(a[i] == b[j])size++;
		}
		if(size==b.size())return true;
		size=0;
	}
	return false;
}

void computeLPS(string b, int m, int *lps[]){
	int len = 0;
	int i = 1;
	*lps[0] = 0;
	while(i<m){
		if(b[i] == b[len]){
			*lps[i] = len + 1;
			len++;
			i++;
		}else{
			if(len !=0){
				len = *lps[len-1];
			}else{
				*lps[i] = 0;
				i++;				
			}

		}
	}
}

bool KMPalgo(string a,string b){
	int n=a.size(),m=b.size();
	int lpsv = 0 ;
	int lps[m];
	computeLPS(b,m,&lps);
	int i=0,j=0;
	while(i<N-M+1){
		if(a[i] == b[j]){
			j++;
			i++;
		}else{
			if(j!=0)j = lps[j-1];
			else{
				i++;
			}
		}
		if(j==m){
			return true;
		}
	}
	return false;
}


int main(){
	
	string a,b;
	cin >> a >> b;
	cout << bruteforce(a,b) << "\n";
	cout << KMPalgo(a,b) << "\n";
	
	
	return 0;
}
