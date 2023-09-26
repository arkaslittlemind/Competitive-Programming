    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define INF (int)1e18
    #define f first
    #define s second
     
    mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
     
    void Solve() 
    {
        int n, k, x; cin >> n >> k >> x;
        
        int mi = k * (k + 1) / 2;
        int mx = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;
        
        if (x >= mi && x <= mx) cout << "YES\n";
        else cout << "No\n";
    }
     
    int32_t main() 
    {
        auto begin = std::chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int t = 1;
        cin >> t;
        for(int i = 1; i <= t; i++) 
        {
            //cout << "Case #" << i << ": ";
            Solve();
        }
        auto end = std::chrono::high_resolution_clock::now();
        auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
        cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
        return 0;
    }
