#include <bits/stdc++.h>
using namespace std;

#define LLI long long int
#define ULLI unsigned long long int

ULLI findTrailingZeros(int n)
{
    if (n < 0) // Negative Number Edge Case
        return -1;
 
    // Initialize result
    int count = 0;
 
    // Keep dividing n by powers of
    // 5 and update count
    for (ULLI i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
}

int main(){
	
	ULLI n,i=0,j=0;
	cin >> n;
	
	while(i<n){
		j+=5;
		i = findTrailingZeros(j);
	}
	if(i > n)cout << -1;
	else{
		for(ULLI l=0;l<=4;l++){
			cout << j + l << " ";
		}
	}
	
	return 0;
}
