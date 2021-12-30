Question Link- https://www.codechef.com/CDRV21B/problems/FIXTREE

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
using namespace std;
const int N = 2e5 + 5;
const int M = 400;
const ll mod = 1e9 + 7;
int n, k, a[N], t, m, b[N], d[N], P[N][20], h[N];
ll  tong, ans, sum[N][20];
vector<int> g[N], rg[N], pre;
set<int> adj[N];
vector<pii> kq;
bool ok[N];
ll pw(ll k, ll n)
{
    ll total = 1 ;
    for (; n; n >>= 1)
    {
        if (n & 1)total = total * k % mod;
        k = k * k % mod;
    }
    return total;
}
void check(int x)
{
    if (x < 0 || x > n)
    {
        cout << 0;
        exit(0);
    }
}
void dfs(int u)
{
    P[u][0] = b[u];
    sum[u][0] = a[u];
    for (int i = 1; i < 17; i ++)
    {
        P[u][i] = P[P[u][i - 1]][i - 1];
        sum[u][i] = sum[u][i - 1] + sum[P[u][i - 1]][i - 1];
    }
    for (int v : adj[u])
    {
        h[v] = h[u] + 1;
        dfs(v);
    }
}
int lca(int u, int v)
{
    if (h[u] < h[v])swap(u, v);
    int log = log2(h[u]);
    for (int i = log; i >= 0; i --)if (h[u] >= h[v] + (1 << i))u = P[u][i];
    if (u == v)return u;
    for (int i = log; i >= 0; i --)
    {
        if (P[u][i] && P[u][i] != P[v][i])
        {
            u = P[u][i];
            v = P[v][i];
        }
    }
    return P[u][0];
}
ll get(int u, int dis)
{
    ll total = 0;
    for (int i = 0; i < 17; i ++)
    {
        if (dis >> i & 1)
        {
            total += sum[u][i];
            u = P[u][i];
        }
    }
    return total;
}
void sol()
{
    cin >> n;
    for (int i = 2; i <= n; i ++)
    {
        cin >> b[i];
        adj[b[i]].insert(i);
    }
    for (int i = 1; i <= n; i ++)cin >> a[i];
    dfs(1);
    cin >> m;
    while (m -- > 0)
    {
        int x, y;
        cin >> t >> x >> y;
        if (t == 1)
        {
            adj[b[x]].erase(x);
            adj[y].insert(x);
            b[x] = y;
            h[x] = h[y] + 1;
            P[x][0] = y;
            sum[x][0] = a[x];
            for (int i = 1; i < 17; i ++)
            {
                P[x][i] = P[P[x][i - 1]][i - 1];
                sum[x][i] = sum[x][i - 1] + sum[P[x][i - 1]][i - 1];
            }
        }
        else if (t == 2)
        {
            kq.pb({x, y});
            if ((int)kq.size() == M)
            {
                for (pii u : kq)a[u.fi] = u.se;
                kq.clear();
                dfs(1);
            }
        }
        else
        {
            int z = lca(x, y);
            //cout << x <<" "<<y<<" "<<z<<'\n';
            ans = get(x, h[x] - h[z]) + get(y, h[y] - h[z]) + a[z];
            for (pii u : kq)
            {
                if (h[u.fi] < h[z])continue;
                if ((h[u.fi] <= h[x] && lca(u.fi, x) == u.fi) ||
                        (h[u.fi] <= h[y] && lca(u.fi, y) == u.fi) )
                {
                    ans = ans + u.se - a[u.fi];
                    if (!ok[u.fi])
                    {
                        pre.pb(u.fi);
                        ok[u.fi] = true;
                        d[u.fi] = a[u.fi];
                    }
                    a[u.fi] = u.se;
                }
            }
            for (int u : pre)
            {
                a[u] = d[u];
                ok[u] = false;
            }
            pre.clear();
            cout << ans << '\n';
        }
    }
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
#define task "test"
    if (fopen(task".inp", "r"))
    {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }
    int ntest = 1;
  
    while (ntest -- > 0)
        sol();
}
