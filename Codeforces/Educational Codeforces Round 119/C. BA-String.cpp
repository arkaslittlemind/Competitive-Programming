Question Link- https://codeforces.com/contest/1620/problem/C

//****************************Template Begins****************************//
 
// Header Files
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<utility>
#include<set>
#include<unordered_set>
#include<list>
#include<iterator>
#include<deque>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<random>
#include<map>
#include<unordered_map>
#include<stdio.h>
#include<complex>
#include<math.h>
#include<cstring>
#include<chrono>
#include<string>
// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// Header Files End
 
using namespace std;
// using namespace __gnu_pbds;
// template<class T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update> ;
 
// template<class key, class value, class cmp = std::less<key>>
// using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;
 
#define ARKA ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i,a,b) for(i=a;i<=b;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define sort0(v) sort(all(v))
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define sz(x) (ll)x.size()
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define inf 1000000000000000005
const ll mod = 1e9 + 7;
 
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
 
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
 
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
 
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}
 
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
 
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
//****************************Template Ends*******************************//
ll n, k, x;
string s;
vll a;
vll ans;
vll productt;
ll solve(ll curx)
{
	ll prod = 1;
	ll i, j;
	if (curx == 1)return n;
	for (i = sz(a) - 1; i >= 0; i--)
	{
		ll it;
		fo(it, 1, a[i] + 1)
		{
			if (prod * (it) >= curx)
			{
				ans[i] = curx % prod == 0 ? curx / prod - 1 : curx / prod;
				x -= prod * ans[i];
				return i;
			}
		}
		prod *= (a[i] + 1);
		productt[i] = prod;
	}
	return -1LL;
}
 
int main() {
	ARKA;
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll t, i, j, temp, sum, it;
	string sans;
	t = 1;
	cin >> t;
	while (t--)
	{
		sans = "NO";
		temp = sum = 0;
		cin >> n >> k >> x;
		cin >> s;
		a.clear();
		fo(i, 0, n - 1)
		{
			if (s[i] == '*')
			{
				ll cnt = 1;
				j = i + 1;
				while (j < n and s[j] == '*')
				{
					cnt++;
					j++;
				}
				a.pb(cnt * k);
				i = j - 1;
			}
		}
		ans.assign(sz(a), 0);
		productt.assign(sz(a) + 1, 1);
		ll idx = solve(x);
		fo(i, idx + 1, sz(a) - 1)
		{
			if (x == 1)break;
			ll curx = x;
			ll prod = productt[i + 1];
			ans[i] = curx % prod == 0 ? curx / prod - 1 : curx / prod;
			x -= ans[i] * productt[i + 1];
		}
		j = 0;
		sans = "";
		fo(i, 0, n - 1)
		{
			if (s[i] == '*')
			{
				string str = "";
				fo(it, 1, ans[j])str += 'b';
				j++;
				sans += str;
				it = i + 1;
				while (it < n and s[it] == '*')it++;
				i = it - 1;
			}
			else
			{
				sans += 'a';
			}
		}
		cout << sans << "\n";
	}
	return 0;
}
 
