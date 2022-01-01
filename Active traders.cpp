#include <bits/stdc++.h>

/*
20
Omega
Alpha
Omega
Alpha
Omega
Alpha
Omega
Alpha
Omega
Alpha
Omega
Alpha
Omega
Alpha
Omega
Alpha
Omega
Alpha
Omega
Beta
*/

using namespace std;

int main(){
	
	int n;
	vector<string> people;
	set<string> peps;
	vector<string> cus;
	float num;
	cin >> n;
	for(int i=0;i<n;i++){
		string temp;
		cin >> temp;
		people.push_back(temp);
	}
	
	for(int i=0;i<people.size();i++){
        peps.insert(people[i]);
    }
    
    set<string>::iterator itr;
    num=0;
    for(itr = peps.begin(); itr != peps.end(); itr++){
    	for(int i=0;i<n;i++){
    		if(*itr == people[i])num++;
    	}
    	if(num*100>=n*5)cus.push_back(*itr);
    	num=0;
	}
//	set<string>::iterator itr;
//	for(itr = peps.begin(); itr != peps.end(); itr++){
//        num = (count(people.begin(),people.end(),(*itr)))*100;
//		if(num >= 5*people.size()){
//            cus.push_back(*itr);
//        }
//    }
    sort(cus.begin(),cus.end());
    
    for(int i=0;i<cus.size();i++){
    	cout << cus[i] << "\n";
	}
    
    
    return 0;
	
}








