#include <bits/stdc++.h>
using namespace std;

unsigned long long int fib(int a,int b,int n, map <unsigned long long int,unsigned long long int> myMap){
    if(myMap.count(n) == 1){
    	cout << "yes";
        return myMap.at(n);
    }else if(n == 0){
        return 0;
    }else if(n == 1){
        return a;
    }else if(n == 2){
        return b;
    }
    myMap.insert(pair<unsigned long long int,unsigned long long int>(n,fib(a,b,n-2,myMap) + fib(a,b,n-1,myMap)*fib(a,b,n-1,myMap)));
    return myMap.at(n);
}

int main(){
    int a,b,n;
    map <unsigned long long int,unsigned long long int> myMap;
    
    cin >> a >> b >> n;
    cout << fib(a,b,n,myMap) << "\n";
    
    
    return 0;
}

