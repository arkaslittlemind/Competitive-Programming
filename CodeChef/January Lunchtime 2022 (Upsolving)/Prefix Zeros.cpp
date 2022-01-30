Question Link- https://www.codechef.com/LTIME104C/problems/PREZ


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

ll helper(ll m, string s)
{
  ll add = 0;
  for (int i = m; i >= 0; i--)
  {
    ll v = (int(s[i]) - int('0') + add) % 10;
    if (v == 0)
      continue;
    add += 10 - v;
  }
  return add;
}
int main()
{
  std::ios::sync_with_stdio(false);
  int T;
  cin >> T;
  // cin.ignore(); must be there when using getline(cin, s)
  while (T--)
  {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll l = 0, r = n - 1, ans = 0;
    while (l <= r)
    {
      ll m = (l + r) / 2;
      if (helper(m, s) > k)
        r = m - 1;
      else
      {
        ans = m + 1;
        l = m + 1;
      }
    }
    cout << ans << endl;
  }
}




