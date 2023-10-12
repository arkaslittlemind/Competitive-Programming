#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());


void Solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    map<int, int> mp;
    for (auto val : vec) {
        int x = val;
        for (int i = 2; i <= sqrt(val); i++) {
            while (x % i == 0) {
                x /= i;
                mp[i]++;
            }
        }
        if (x != 1) mp[x]++;
    }
    for (auto val : mp) {
        if (val.second % n != 0){
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}


int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        //cout << "Case #" << i << ": ";
        Solve();
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";
    return 0;
}
