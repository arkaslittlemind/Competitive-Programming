#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

bool helper(long long a, long long b, long long c) {
    //long long sum = a + b + c;
    long long mini = min({a, b, c});

    bool flag = true;
    int count = 0;
    if(a % mini != 0 || b % mini != 0 || c % mini != 0) flag = false;
    while(a != mini) {
        if(a % mini != 0 || count > 3) {
            flag = false;
            break;
        }
        a -= mini;
        count++;
    }
    while(b != mini) {
        if(b % mini != 0 || count > 3) {
            flag = false;
            break;
        }
        b -= mini;
        count++;
    }
    while(c != mini) {
        if(c % mini != 0 || count > 3) {
            flag = false;
            break;
        }
        c -= mini;
        count++;
    }
    if(count > 3) flag = false;

    if(flag) {
        return true;
    }
    return false;

}

void Solve() {
   long long a, b, c;
   cin >> a >> b >> c;

   if(helper(a, b, c)) {
    cout << "Yes" << endl;
   } else {
    cout << "No" << endl;
   }

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
