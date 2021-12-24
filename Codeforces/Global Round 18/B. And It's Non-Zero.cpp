Question Link- https://codeforces.com/contest/1615/problem/B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vll = vector<long long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using mii = map<int, int>;
using mll = map<long long, long long>;
using umii = unordered_map<int, int>;
using umll = unordered_map<long long, long long>;
const ll mod = 1e9 + 7, inf = 1e18;
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define endl "\n"
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int DP[200001][20];
void solveTestCases(){
    int l, r;
    cin >> l >> r;
 
    vll checker(20, 0);
    int maxElement = 0;
 
    loop(i,0,20){
        maxElement = max(maxElement, DP[r][i] - DP[l - 1][i]);
    }
    cout << (r - l + 1 - maxElement) << endl;
}
int main(){
    fast;
 
    int t;
    cin >> t;
 
    loop(i,0,200001){
        int  checker = i, idx = 0;
        while (checker){
            DP[i][idx++] += (checker % 2);
            checker /= 2;
        }
        loop(j,0,20){
            DP[i][j] += DP[i - 1][j];
        }
    }
 
    while(t--){
        solveTestCases();
    }
 
    return 0;
}
