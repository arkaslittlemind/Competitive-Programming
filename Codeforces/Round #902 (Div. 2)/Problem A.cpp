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
     
       int sumEfficiency = 0;
       //int missingEfficiency;
     
       for(int i = 0; i < n - 1; i++) {
        int efficiency;
        cin >> efficiency;
        sumEfficiency += efficiency;
       }
     
        if(sumEfficiency < 0) {
            cout << (-1) * sumEfficiency << endl;
        }
        else {
            cout << (-1) * sumEfficiency << endl;
        }
      //cout << missingEfficiency << endl;
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
