Question Link- https://www.codechef.com/CDRV21B/problems/CNTARRAY

#include <bits/stdc++.h>

using namespace std;

#define Task ""
#define ll long long
#define pb push_back
#define fs first
#define sc second
#define all(v) v.begin(),v.end()



typedef pair<int, int> ii;
const ll inf = 1e9;
const ll mod = 1e9 + 7;
const int N = 3e5 + 5;

ll p[N];
int b[N];
int n, m;

namespace modulo {
ll pows(ll a, ll b) {
    if (b == 0)return 1;
    if (b == 1)return a;
    ll ans = pows(a, b / 2); ans *= ans; ans %= mod;
    if (b & 1) {ans *= a; ans %= mod;}
    return ans;
}
void add(ll &a, ll b) {a += b; a %= mod;}
void sub(ll &a, ll b) {a -= b; a %= mod; if (a < 0)a += mod;}
void mul(ll &a, ll b) {a *= b; a %= mod; if (a < 0)a += mod;}
void divv(ll &a, ll b) {a *= pows(b, mod - 2); a %= mod; if (a < 0)a += mod;}
}
using namespace modulo;
ll gt[N];
ll C(ll k, ll n) {
    ll ans = gt[k] * gt[n - k];
    ans %= mod;
    ans = pows(ans, mod - 2);
    ans *= gt[n];
    ans %= mod;
    return ans;
}


void solve() {
    cin >> n >> m;
    ll cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
        if (b[i] <= m)++cnt;
    }
    ll res = 1;
    for (int i = 1; i <= n; ++i) {
        res *= (m - i + 1);
        res %= mod;
    }
    p[n + 1] = 1;
    p[n] = (m - n + 1) % mod;
    for (int i = n - 1; i >= 1; --i) {
        p[i] = (p[i + 1] * (m - i + 1)) % mod;
    }

    for (int i = 1; i <= cnt; ++i) {
        ll ans = C(i, cnt) % mod;
        ans *= p[i + 1]; ans %= mod;

        if (i % 2 == 0)res = (res + ans) % mod;
        else res = (res - ans + mod) % mod; ;
    }
    cout << res;
}

int main () {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    gt[0] = 1;
    for (int i = 1; i <= 3e5; ++i)gt[i] = (gt[i - 1] * i) % mod;
    int T = 1;
    while (T--)solve();
}
