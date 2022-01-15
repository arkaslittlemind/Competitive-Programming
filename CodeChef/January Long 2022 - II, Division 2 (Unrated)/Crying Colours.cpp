Question Link- https://www.codechef.com/JAN222B/problems/CRYCOLR

#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define fr1(i,n)for(ll i=1;i<=n;i++)

ll t, n;
int main() {

  cin >> t;
  while (t--) {
    cin >> n;
    ll ans = 0;
    vector<vector<ll>> vec(3, vector<ll>(3));
    for (ll i = 0; i < 3; i++) {
      cin >> vec[i][0] >> vec[i][1] >> vec[i][2];

    }
    if (vec[0][0] == n && vec[1][1] == n && vec[2][2] == n) {
      cout << ans << endl;
      continue;
    }
    ll lsum = vec[2][0] + vec[2][1] + vec[1][0];
    ll rsum = vec[0][1] + vec[0][2] + vec[1][2];
    cout << max(lsum, rsum) << endl;


  }
  return 0;
}
