Question Link- https://www.codechef.com/JAN221B/problems/COVSPRD

#include <bits/stdc++.h>
using namespace std;
#define nline "\n"

int main() {
    int t = 1;
    cin >> t;
    while (t--) {

        long long n , d, answer;
        cin >> n >> d;

        if (d <= 10) {
            answer = pow(2, d);
        }
        else if (d <= 20) {
            answer = 1024 * pow(3, d - 10);
        }
        else
        {
            cout << n << nline;
            continue;
        }

        if (answer > n) cout << n << nline;
        else cout << answer << nline;

    }
    return 0;
}
