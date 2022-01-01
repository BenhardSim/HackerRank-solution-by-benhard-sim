#include <bits/stdc++.h>

using namespace std;

int main(){
	/*
	5 2
	1 5 3 4 2
	*/
    
    int n,k,i=0,j=1,sum,dif;
    vector<int> arr;
    
    cin >> n >> k;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    sum = 0;
    while(j<n){
//        printf("test");
        dif = arr[j]-arr[i];
        if(dif==k){
            sum++;
            j++;
            i++;
        }else if(dif>k){
            i++;
        }else if(dif<k){
        	j++;
		}
        
    }
    cout << sum;
    
    return 0;
}

