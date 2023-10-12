#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

bool findSubstr(const string& x, const string& s) {
    return x.find(s) != string::npos;
}

void Solve() {
   int n, m;
   cin >> n >> m;
   string x, s;
   cin >> x >> s;

   bool flag = false;
   for(int i = 0; i <= 6; i++) {
    if(findSubstr(x, s)) {
        flag = true;
        cout << i << endl;
        break;
    }
    x += x;
   }
   if(!flag) cout << "-1 \n" ;

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
