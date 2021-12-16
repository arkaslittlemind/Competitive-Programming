Question Link- https://codeforces.com/problemset/problem/271/A

// Implementation //


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
  int y;
  cin >> y;

  while (true) {
    y += 1;
    int a = y / 1000; //first digit
    int b = y / 100 % 10; //second digit
    int c = y / 10 % 10; //third digit
    int d = y % 10; //fourth digit

    if (a != b && a != c && a != d && b != c && b != d && c != d) {
      cout << y;
      break;
    }
  }

  return 0;
}
