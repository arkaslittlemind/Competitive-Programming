Question Link- https://www.codechef.com/INFI21C/problems/DALGONA

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
#define infinity 999999999999999999
#define sz(v) ((int)(v).size())
#define all(v) (v).begin(), (v).end()
#define space " "
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define pb(n) push_back(n)
#define mii map<int, int>
#define umii unordered_map<int, int>
#define test_cases_loop \
    int t;              \
    cin >> t;           \
    while (t--)
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define cout std::cout
#define cin std::cin
#define loop(var, initial, final) for (int var = initial; var < final; var++)
typedef tree<pii, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int32_t main()
{
    FIO
        test_cases_loop
    {
        int n;

        cin >> n;
        switch (n)
        {
        case 1:
            cout << 1 << "\n";
            cout << 1 << " " << 1 << "\n";
            break;
        case 2:
            cout << 2 << "\n";
            cout << 3 << " " << 1 << "\n";
            cout << 4 << " " << 1 << "\n";
            break;
        case 3:
            cout << 2 << "\n";
            cout << 1 << " " << 1 << "\n";
            cout << 2 << " " << 2 << "\n";
            break;
        case 4:
            cout << 1 << "\n";
            cout << 1 << " " << 4 << "\n";
            break;

        default:
            if (n % 2 == 0)
            {
                cout << 2 << endl;
                cout << 1 << " " << n - 1 << endl;
                cout << (n - 1) / 2 << " " << 1 << endl;
            }
            if (n % 2)
            {
                cout << 3 << "\n";
                cout << 1 << " " << n - 2 << "\n";
                cout << 2 << " " << 1 << "\n";
                cout << (n / 2 + 1) << " " << 1 << "\n";
            }

            break;
        }
    }

    return 0;
}
