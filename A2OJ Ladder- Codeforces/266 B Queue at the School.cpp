Question Link- https://codeforces.com/problemset/problem/266/B

//Constructive Algorithms//

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	string s;
	cin >> n >> t >> s;
	while(t--) {
		for(int i = 1; i < n; i++){
			if(s[i] == 'G' && s[i - 1] == 'B') {
				s[i] = 'B';
				s[i - 1] = 'G';
				i++;
			}
		}
	}
	cout << s << endl;
	return 0;

}
© 2021 GitHub, Inc.
Terms
