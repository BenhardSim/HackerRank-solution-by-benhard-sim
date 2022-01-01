#include <bits/stdc++.h>
using namespace std;

#define LLI long long int
#define ULLI unsigned long long int
#define s second
#define f first

int main(){
	
	vector<int> in;
	vector<int> s1(100000,0);
	vector<int> s2(100000,0);
	vector<int> val;
	
	int t,n,sum1,sum2;
	cin >> t;
	
	for(int l=0;l<t;l++){
		cin >> n;
		in.clear();
		for(int i=0;i<n;i++){
			int temp;
			cin >> temp;
			in.push_back(temp);
		}
		fill(s1.begin(), s1.end(), 0);
		fill(s2.begin(), s2.end(), 0);
		/*base cases*/
		s1[0] = 0;
		s2[0] = 0;
		for(int i=1;i<in.size();i++){
			sum1 = max(abs(in[i] - in[i-1]) + s1[i-1], abs(in[i] -1 ) + s2[i-1]);
			sum2 = max(abs(1 - in[i-1]) + s1[i-1], s2[i-1]);
			s1[i] = sum1;
			s2[i] = sum2;
		}
		val.push_back(max(sum1,sum2));
	}
	for(int j=0;j<val.size();j++){
		cout << val[j] << "\n";
	}
	
	return 0;
}
