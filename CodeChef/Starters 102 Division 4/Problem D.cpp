#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve()
{
    int modulo = 1e9 + 7;
    int n;
    //int c;
    long long result = 1;
    cin >> n;
    string s;
    cin >> s;

    vector<int> vec;
    for (int i = 2; i < n; i += 2) {
        char a, b, c;
        a = s[i - 2];
        b = s[i - 1];
        c = s[i];

        if (a != b) {
            if (c == '1') {
                vec.push_back(2);
            }
            else {
                vec.push_back(1);
            }
        }
        else if (a == '1') {
            if (c == '1') {
                vec.push_back(2);
            }
            else {
                vec.push_back(1);
            }
        }
        else {
            if (c == '1') {
                vec.push_back(0);
            }
            else {
                vec.push_back(3);
            }
        }
    }

    for(auto it : vec) {
        result = result * it;
        result = result % modulo;
    }

    cout << result << endl;

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
