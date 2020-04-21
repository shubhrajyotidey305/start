#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

	/*#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif*/

	int n,p=0;
	cin >> n;
	pair <string, string> s[n];
	for(int i=0; i<n; i++){
		cin >> s[i].first >> s[i].second;
	}
	
	sort(s, s+n);

	/*for(int i=0; i<n; i++){
		cout << s[i].first << " " << s[i].second << endl;
	}*/

	for(int i=0; i<n; i++){
		if(s[i] == s[i+1] && i != n-1 ){
			p++;
		}
	}
	
	cout << n-p;

	return 0;
}	
