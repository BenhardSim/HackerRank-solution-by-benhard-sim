/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define ULL unsigned long long 

char compare(){
	ULL x1,x2,p1,p2;
	cin >> x1 >> p1 >> x2 >> p2;
	if(x1*pow(10,p1) == x2*pow(10,p2))return '=';
	else if(x1*pow(10,p1) < x2*pow(10,p2))return '<';
	else  return '>';
}

//char compare2(){
//	ULL p1,p2,len1,len2;
//	string x1,x2;
//	cin >> x1 >> p1 >> x2 >> p2;
//	len1 = x1.length() + p1;
//	len2 = x2.length() + p2;
//	if(len1 == len2){
//		int temp1=x1[0]-48,temp2=x2[0]-48;
//		if(temp1 > temp2)return '>';
//		else if(temp1 < temp2)return '<';
//		else return '=';
//	}else if(len1 > len2)return '>';
//	else return '<';
//}

int main(){
	
	ULL t;
	cin >> t;
	while(t--){
		cout << compare() << "\n";
	}
	
	return 0;
}
