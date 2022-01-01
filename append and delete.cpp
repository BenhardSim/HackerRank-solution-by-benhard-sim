#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

string appendAndDelete(string s, string t, int k) {
    int i=0,j=0,n=0;
    bool open = false;
    vector<char> trash;
    // s -> t
    while(i<s.size() || j<t.size()){
        if(s[i]!=t[j] || open==true){
        	if(i<s.size())trash.push_back(s[i]);
        	if(j<t.size())trash.push_back(t[j]);
        	open = true;
        	i++;
        	j++;
		}else if(i==s.size() || j == t.size()){
			open = true;
		}else{
			i++;
			j++;
		}	
    }
    int temp = trash.size();
//	if((s.size() < t.size() && trash.size()%k!=0))return "No";
//    if(trash.size()<=k || trash.size()==0)return "Yes";
//    return "No";
	if(k<temp)return "No";
	if(abs(temp-k)%2 == 0 || trash.size() == 0)return "Yes";
	return "No";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";
	cout << result << "\n";
    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

