Question Link- https://www.codechef.com/CDRV21B/problems/MXFACS

#include "bits/stdc++.h"
#define int long long

using namespace std;

const int N = 1e5 + 1;

vector<bool> checkPrime;
vector<int> allPrimes;

int32_t main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    checkPrime.resize(N + 1, true);
    checkPrime[0] = checkPrime[1] = false;
    for (int i = 2; i <= N; i++) {
        if (checkPrime[i]) {
            allPrimes.push_back(i);
            for (int j = i * i; j <= N; j += i)
                if (checkPrime[j]) {
                    checkPrime[j] = false;
                }
        }
    }

    while (t--) {
        int n; cin >> n;
        int maximumFreqPrime = 0, finalPrime = -1;
        for (int x : allPrimes) {
            if (n % x == 0) {
                int cnt = 0;
                while (n % x == 0) {
                    cnt++;
                    n /= x;
                }
                if (maximumFreqPrime < cnt) {
                    maximumFreqPrime = cnt;
                    finalPrime = x;
                }
            }
        }

        if (n != 1) {
            if (maximumFreqPrime < 1) {
                finalPrime = n;
            }
        }
        cout << finalPrime << "\n";
    }

}
