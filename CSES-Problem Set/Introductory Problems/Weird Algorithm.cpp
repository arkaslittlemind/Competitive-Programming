Question Link- https://cses.fi/problemset/task/1068

// Basic Implementation //


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
int main()
{
  long long int n;
  cin >> n;
  while (n != 1) {
    cout << n << " ";
    if (n % 2 == 0) {
      n = n / 2;
    }
    else {
      n = (n * 3 ) + 1;
    }
  }

  cout << 1 << endl;
  return 0;
}
