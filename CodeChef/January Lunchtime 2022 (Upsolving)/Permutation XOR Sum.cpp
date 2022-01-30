Question Link- https://www.codechef.com/LTIME104C/problems/PERMXORSUM


#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;

ll helper(ll n) {
  ll no = 0, cnt = 0;
  while (n) {
    if (n % 2 == 0) no += (1LL << cnt);
    n /= 2, cnt++;
    if (n <= 0) break;
  }
  return no;
}
int main()
{
  std::ios::sync_with_stdio(false);
  int T;
  cin >> T;
  // cin.ignore(); must be there when using getline(cin, s)
  while (T--)
  {
    ll n; cin >> n;
    ll ans = 0;
    while (n > 0)
    {
      ll a = helper(n);
      ll b = n;
      if ((b & (b + 1)) == 0) b--;
      ll val = ((b * (b + 1)) / 2) - ((a * (a - 1)) / 2);
      ans += (val * 2);
      n = a - 1;
    }
    cout << ans << "\n";
  }
}





