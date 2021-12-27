Question Link- https://www.codechef.com/problems/SLEEPTECH

#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {

	int n, a, b;
	cin >> n >> a >> b;
	map<int, int> mp;
	while (n--) {
		int l, r;
		cin >> l >> r;
		mp[l]++, mp[r + 1]--;
	}

	int intvals = 0, ans = 0, prev = -1;
	for (auto [curr, i] : mp) {
		int k = 1e9, l = 1, h = b - a + 1;
		while (l <= h) {
			int m = (l + h) / 2;
			if (a * m + m * (m - 1) / 2 < curr) {
				k = m, l = m + 1;
			} else {
				h = m - 1;
			}
		}
		int minsum = a * k + k * (k - 1) / 2;
		int maxsum = b * k - k * (k - 1) / 2;
		if (minsum < curr and maxsum >= prev) {
			ans = max(ans, intvals);
		}
		prev = curr;
		intvals += i;
	}

	cout << ans << '\n';
}

int32_t main() {
	cin.tie(0)->sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
