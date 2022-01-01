#include <bits/stdc++.h>
#define LLI long long int
#define ulli unsigned long long int
using namespace std;



ulli fib2(int n){
    long long int f[n + 2];
    long long int i;

    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

long long int fib3(int n){
	long long int tab[n+1] = {0};
	tab[1] = 1;
	for(int i=0;i<n;i++){
		tab[i+1] += tab[i];
		tab[i+2] += tab[i];
	}
	return tab[n];
}


int gridTravel2(int m,int n){
	if(m == 1 && n == 1) return 1;
	if(m == 0 || n == 0) return 0;
	return gridTravel2(m-1,n) + gridTravel2(m,n-1);
}

LLI gridTrav(int m,int n){
	LLI tab[100][100] = {0};
	tab[1][1] = 1;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			int current = tab[i][j];
			if(j+1<=m)tab[i][j+1] += current;
			if(i+1<=n)tab[i+1][j] += current;
		}
	}
	
	return tab[n][m];
}

bool canSum(int n,vector<int> arr){
	bool tab[300] = {false};
	tab[0] = true;
	for(int i=0;i<=n;i++){
		if(tab[i]){
			for(int j=0;j<arr.size();j++){
				tab[i+arr[j]] = true;
			}
		}
	}
	
	return tab[n];
	
}

int main(){
	cout << fib2(50) << endl;
	cout << gridTravel2(3,2) << endl;
	cout << gridTrav(18,18) << endl;
	cout << fib3(50) << endl;
	cout << canSum(300,{7,14}) << endl;
                                  

	return 0;
}











