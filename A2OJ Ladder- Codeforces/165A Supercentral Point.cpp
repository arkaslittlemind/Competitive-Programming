Question Link- https://codeforces.com/problemset/problem/165/A

// Implementation //

#include <iostream>
#include <iosfwd>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cassert>
#include <cctype>
#include <climits>
#include <vector>
#include <bitset>
#include <set>
#include <queue>
#include <math.h>
#include <stack>
#include <map>
#include <deque>
#include <string>
#include <list>
#include <iterator>
#include <sstream>
#include <complex>
#include <fstream>
#include <functional>
#include <numeric>
#include <utility>
#include <algorithm>
#include <assert.h>
#include <unordered_map>
#pragma GCC optimize ("-O3")

using namespace std;

#define watch(x) cout << (#x) << " = " << (x) << endl
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15
#define nline "\n"


int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    LL i, j, n, l, r, u, d, x, y;
    while (cin >> n)
    {
        LL X[n + 1], Y[n + 1];
        for (i = 0; i < n; i++) {
            cin >> X[i] >> Y[i];
        }
        LL point = 0;
        for (i = 0; i < n; i++) {
            l = r = u = d = 0;
            x = X[i]; y = Y[i];
            for (j = 0; j < n; j++) {
                if (X[j] == x) {
                    if (Y[j] > y)u++;
                    if (Y[j] < y)d++;
                }
                if (Y[j] == y) {
                    if (X[j] > x)r++;
                    if (X[j] < x)l++;
                }

            }
            if (l > 0 && r > 0 && d > 0 && u > 0)
                point++;
        }
        cout << point << endl;
    }
}
