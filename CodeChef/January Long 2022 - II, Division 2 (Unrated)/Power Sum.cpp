Question Link- https://www.codechef.com/JAN222B/problems/POWSUM


#include <bits/stdc++.h>

using namespace std;



int main() {
    int t;
    cin >> t;
    while (t--) {
        int i, n, sum = 0, b, j = 1;
        cin >> n;
        int a[n], d[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            d[i] = a[i];
            sum += a[i];
        }
        sort(a, a + n);
        b = ceil(log2(sum));
        auto c = find(d, d + n, a[0]);
        j = ((pow(2, b) - sum) + a[0]) / a[0];
        if ((sum & sum - 1) == 0) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
            cout << 1 << " " << j;
            cout << endl;
            cout << (distance(d, c)) + 1 << endl;
        }
    }
}
  
