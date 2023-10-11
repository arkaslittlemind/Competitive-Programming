#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18
#define f first
#define s second

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

int maxAlice(int a1, int a2, int a3) {
    int maxNumber1;

    if (a1 >= a2 && a1 >= a3) {
        maxNumber1 = a1;
        if (a2 >= a3) {
            maxNumber1 = maxNumber1 * 10 + a2;
            maxNumber1 = maxNumber1 * 10 + a3;
        } else {
            maxNumber1 = maxNumber1 * 10 + a3;
            maxNumber1 = maxNumber1 * 10 + a2;
        }
    } else if (a2 >= a1 && a2 >= a3) {
        maxNumber1 = a2;
        if (a1 >= a3) {
            maxNumber1 = maxNumber1 * 10 + a1;
            maxNumber1 = maxNumber1 * 10 + a3;
        } else {
            maxNumber1 = maxNumber1 * 10 + a3;
            maxNumber1 = maxNumber1 * 10 + a1;
        }
    } else {
        maxNumber1 = a3;
        if (a1 >= a2) {
            maxNumber1 = maxNumber1 * 10 + a1;
            maxNumber1 = maxNumber1 * 10 + a2;
        } else {
            maxNumber1 = maxNumber1 * 10 + a2;
            maxNumber1 = maxNumber1 * 10 + a1;
        }
    }
    return maxNumber1;
}

int maxBob(int b1, int b2, int b3) {
    int maxNumber2;

    if (b1 >= b2 && b1 >= b3) {
        maxNumber2 = b1;
        if (b2 >= b3) {
            maxNumber2 = maxNumber2 * 10 + b2;
            maxNumber2 = maxNumber2 * 10 + b3;
        } else {
            maxNumber2 = maxNumber2 * 10 + b3;
            maxNumber2 = maxNumber2 * 10 + b2;
        }
    } else if (b2 >= b1 && b2 >= b3) {
        maxNumber2 = b2;
        if (b1 >= b3) {
            maxNumber2 = maxNumber2 * 10 + b1;
            maxNumber2 = maxNumber2 * 10 + b3;
        } else {
            maxNumber2 = maxNumber2 * 10 + b3;
            maxNumber2 = maxNumber2 * 10 + b1;
        }
    } else {
        maxNumber2 = b3;
        if (b1 >= b2) {
            maxNumber2 = maxNumber2 * 10 + b1;
            maxNumber2 = maxNumber2 * 10 + b2;
        } else {
            maxNumber2 = maxNumber2 * 10 + b2;
            maxNumber2 = maxNumber2 * 10 + b1;
        }
    }
    return maxNumber2;
}


void Solve() {
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    int alice = maxAlice(a1, a2, a3);
    int bob = maxBob(b1, b2, b3);

    if (alice > bob)
        cout << "Alice" << endl;
    else if (bob > alice)
        cout << "Bob" << endl;
    else
        cout << "Tie" << endl;

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
