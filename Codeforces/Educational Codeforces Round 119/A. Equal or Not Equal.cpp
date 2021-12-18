Question Link- https://codeforces.com/contest/1620/problem/A

    #include <bits/stdc++.h>
    using namespace std;

    int main() {

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int ncount = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
        if (s[i] == 'N')
            ncount++;
        }
        if (ncount == 1)
        {
        cout << "NO" << endl;
        }
        else
        {
        cout << "YES" << endl;
        }
    }


    return 0;
    }
