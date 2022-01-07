Question Link- https://www.codechef.com/JAN221B/problems/PINBS

#include <iostream>
#include <algorithm>
using namespace std;
#define nline "\n"

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sz = s.length();

        if ( sz == 1) {
            cout << "NO" << nline;
            continue;
        }
        int counter = 0, pos = -1;
        for (int i = 0; i < sz; i++) {
            if (s[i] == '1') {
                counter++;
                pos = i + 1;
            }
        }
        if (counter == 0 || (counter == 1 && pos == sz))
            cout << "NO" << nline;
        else
            cout << "YES" << nline;

    }
    return 0;
}
