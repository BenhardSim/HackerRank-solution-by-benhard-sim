#include <bits/stdc++.h>
using namespace std;
#define ULLI unsigned long long int

int main(){
	
	ULLI n,m,step=0;
	cin >> n >> m;
	vector<ULLI> task;
	for(ULLI i=0;i<m;i++){
		ULLI temp;
		cin >> temp;
		task.push_back(temp);
	}
	ULLI prev;
	step+=task[0]-1;
	for(ULLI i=1;i<m;i++){
		prev=task[i-1];
		if(task[i] < prev){
			step+=((n-prev)+(task[i]-1)+1);		
		}else if(task[i] > prev){
			step+=(task[i]-prev);
		}
	}
	
	cout << step;
	
	
	return 0;
}
