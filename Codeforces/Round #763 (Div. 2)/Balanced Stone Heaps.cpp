Question Link- https://codeforces.com/contest/1623/problem/C

#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define el '\n'
using namespace std;
const int N = 2e5 + 5;
int n;
int a[N];
bool check(int x){
    int temp[n + 2];
    memset(temp, 0, sizeof temp);
    for(int i = n - 1; i >= 2; i--){
        if(a[i] + temp[i] < x) return false;
        int st = 0, en = a[i], mid, ans = 0;
        while (st <= en){
            mid = st + en >> 1;
            if(3 * mid <= a[i] && a[i] - (3 * mid) + temp[i] >= x){
                st = mid + 1;
                ans = mid;
            }else{
                en = mid - 1;
            }
        }
        temp[i - 1] += ans;
        temp[i - 2] += (2 * ans);
    }
    if(temp[0] + a[0] >= x && temp[1] + a[1] >= x) return true;
    return false;
}
void go() {
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int st = 1, en = 1e9, mid, ans;
    while (st <= en){
        mid = st + en >> 1;
        if(check(mid)){
            ans = mid;
            st = mid + 1;
        }else{
            en = mid - 1;
        }
    }
    cout << ans << el;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--)
        go();
    return 0;
}
