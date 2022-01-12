Question Link- https://codeforces.com/contest/1625/problem/C

#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
int n , l , k ;
vector<int> pos, tim ;
int dp[501][501];
int helper(int i , int rem ) {
    if (i == n) {
        return 0;
    }
    if (dp[i][rem] != -1) return dp[i][rem];
    int ret = INT_MAX;
    for (int j = i + 1 ; j <= i + 1 + rem && j <= n ; j++ ) {
        ret = min(ret , helper(j, rem - (j - (i + 1))) + ((pos[j] - pos[i]) * tim[i])  );
    }
    return dp[i][rem] = ret;
}
void arkaslittlemind() {
    memset(dp, -1, sizeof dp);
    cin >> n >> l >> k ;
    pos.clear(); tim.clear();
    pos.resize(n + 1);
    tim.resize(n + 1);
    pos[n] = l;
    for (int i = 0 ; i < n ; i++) {
        cin >> pos[i];
    }
    for (int i = 0 ; i < n ; i++) {
        cin >> tim[i];
    }
    cout << helper(0, k) << endl;
}
int32_t main() {
    fast();
    int t = 1 ;
    while (t--) {
        arkaslittlemind();
    }
}
