Question Link- https://codeforces.com/contest/1619/problem/A


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
#define sfarray(x) ((int )x.size())

using namespace std;
int main()
{
  std::ios::sync_with_stdio(false);
  int T;
  cin >> T;
  // cin.ignore(); must be there when using getline(cin, s)
  while (T--)
  {
    string s;
    cin >> s;

    if (sfarray(s) % 2 != 0) cout << "NO" << endl;
    else {
      ll p = sfarray(s) / 2;
      string ans = "YES";
      for (ll i = 0; i < p; i++) {
        if (s[i] != s[p + i]) {
          ans = "NO";
          break;
        }
      }
      cout << ans << endl;
    }
  }
  return 0;
}

