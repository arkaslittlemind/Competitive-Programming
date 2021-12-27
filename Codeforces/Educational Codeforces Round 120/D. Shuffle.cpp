Question Link- https://codeforces.com/contest/1622/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=5005;
const ll mod=998244353;
ll fact[N],inv[N];

ll power(ll x,ll y){
    ll f=1;
    while(y){
        if(y%2==1)
            f*=x;
        f%=mod;
        x*=x;
        x%=mod;
        y/=2;
    }
    return f;
}
ll ncr(ll n,ll r){
    ll ans=fact[n]*inv[r];
    ans%=mod;
    ans*=inv[n-r];
    return ans%mod;
}
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll ct=0;
    for(auto i:s)
        ct+=i=='1';

    if(ct<k || k==0){
        cout<<1<<endl;
        return;
    }
    ll c=0;
    ll l=0,r=0;
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='1')
            c++;
        if(c==k){
           r=i+1;
           break;
        }
    }
    while(r<=n){
        ll pr=r;
        while(r<n && s[r]=='0')
            r++;
        if(ans==0){
            ans+=ncr(r-l,k);
        }
        else{
            ans+=ncr(r-l,k)-ncr(pr-l-1,k-1);
            if(ans<0)
                ans+=mod;
        }
        ans%=mod;
        while(l<n && s[l]!='1')
            l++;
        l++;
        if(r==n)
            break;
        r++;
    }
    cout<<ans%mod<<endl;
}
int main(){
    ll t=1;
    //cin>>t;
    fact[0]=1;
    inv[0]=1;
    for(ll i=1;i<N;i++){
        fact[i]=fact[i-1]*i;
        fact[i]%=mod;
        inv[i]=power(fact[i],mod-2);
    }
    while(t--){
        solve();
    }
}
