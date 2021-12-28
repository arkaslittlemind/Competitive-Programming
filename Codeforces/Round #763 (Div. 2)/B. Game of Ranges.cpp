Question Link- https://codeforces.com/contest/1623/problem/B

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define el '\n'
using namespace std;
const int N = 1e3 + 5;
int n;
map<pair<int, int>, bool> mp;
pair<int, int> a[N];
map<pair<int, int>, int> ans;
void solve(int st, int en)
{
    if (st == en)
    {
        ans[ {st, en}] = st;
        return;
    }
    for (int i = st; i <= en; i++)
    {
        if (i == st)
        {
            if (mp[ {i + 1, en}])
            {
                ans[ {st, en}] = i;
                solve(i + 1, en);
                break;
            }
        }
        else if (i == en)
        {
            if (mp[ {st, i - 1}])
            {
                ans[ {st, en}] = i;
                solve(st, i - 1);
                break;
            }
        }
        else
        {
            if (mp[ {st, i - 1}] && mp[ {i + 1, en}])
            {
                ans[ {st, en}] = i;
                solve(st, i - 1);
                solve(i + 1, en);
                break;
            }
        }
    }
}
void go()
{
    cin >> n;
    mp.clear();
    ans.clear();
    int st = 1, en = n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        mp[ {a[i].first, a[i].second}] = true;
    }
    solve(st, en);
    for (auto it : mp)
    {
        if (ans[it.first])
            cout << it.first.first << " " << it.first.second << " " << ans[it.first] << el;
    }
    cout << el;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--)
        go();
    return 0;
}
