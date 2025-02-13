#include <bits/stdc++.h>
using namespace std;

bool valid(string s){
	
	if(!((s[0] > 'a' && s[0] < 'z') || (s[0] > 'A' && s[0] < 'Z')  || s[0] == '_'))
		return false;
	for(int i = 0; i < s.size(); i++){
		if(!((s[i] > 'a' && s[i] < 'z') ||  (s[i] > 'A' && s[i] < 'Z') || (s[i] > '0' && s[i] < '9') || s[i] == '_')){
				return false;
			}
		}
	
	return true;
}

int main(){
	string s;
	cin >> s;

	valid(s) ? cout << "Valid" : cout << "Invalid";
}
