Question Link- https://codeforces.com/contest/1629/problem/B

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll countOdd(ll x , ll y){
    int n = (y - x) / 2;
    if (y%2 != 0 || x%2 != 0)
        n += 1;

    return n;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll l,r,k;
        cin >> l >> r >> k;
        ll cnt = countOdd(l , r);
        if(l==r && l>1){
            cout<<"YES"<<endl;
        }
        else if(cnt<=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
