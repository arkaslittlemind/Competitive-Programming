Question Link- https://codeforces.com/problemset/problem/227/B

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

    long long n, a;
    cin >> n;
    vector<int> arr(n);
    for (int i = 1; i <= n; i++) {
        cin >> a;
        arr[a] = i;
    }
    int m, b;
    cin >> m;
    long long vasya(0), petya(0);
    while (m--) {
        cin >> b;
        vasya += arr[b];
        petya += (n + 1 - arr[b]);
    }
    cout << vasya << " " << petya << nline;
}









































