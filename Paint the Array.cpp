/*By : Benhard Sim*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define LL unsigned long long 

int findGCD(vector<int> arr, int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {	
    	result = __gcd(arr[i], result);
        
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

void val(){
	int n,resA=-1,resB=-1;
	cin >> n;
	vector<int> numL, numR;
	for(int i=1;i<n+1;i++){
		int temp;
		cin >> temp;
		if(i%2 == 0)numR.push_back(temp);
		else numL.push_back(temp);
	}
	
	int minA = findGCD(numL,numL.size());
	int minB = findGCD(numR,numR.size());
	
	for(int i=0;i<numL.size();i++){
		if(numL[i]%minB == 0)resA=0;
	}	
	for(int i=0;i<numR.size();i++){
		if(numR[i]%minA == 0)resB=0;
	}

	cout << "\n";
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		val();
	}
	
	return 0;
}
