Question Link- https://codeforces.com/contest/1622/problem/B

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//const double pi=acos(-1.0);
#define mod 1000000007
#define forn(i,k,n) for(ll i=k;i<n;i++)
#define fornr(i,k,k1) for(ll i=k;i>=k1;i--)
#define v(ll) vector<ll>
#define vl(a,n,ll,k) vector<ll> a(n,k)
#define vli(a,n) vector<ll> a(n)
#define init(a,n) vector<ll> a(n);forn(i,0,n)cin>>a[i]
#define vll(a,n,m,ll,k) vector<vector<ll>> a(n,vector<ll>(m,k))
#define mp(a,ll,ll1) map<ll,ll1> a
#define st(a,ll) set<ll> a
#define mpa make_pair
#define pr pair<ll,ll>
#define pb push_back
#define MAX 1000000
#define ed '\n'
#define fileTake ifstream cin("input.txt");ofstream cout("output.txt");
#define sortv(a) sort(a.begin(),a.end())
#define sorta(a,n) sort(a,a+n)
#define yeah "YES"
#define nil "NO"
#define All(x) x.begin(),x.end()
#define remDup(a) a.erase(unique(All(a)),a.end())
#define N 100
 
void swap(ll &x,ll &y) 
{ 
  x=x^y;
  y=x^y;
  x=x^y;
} 

template<typename T>
void print(T a){for(auto i=a.begin();i!=a.end();i++)cout<<*i<<" ";cout<<endl;}
bool isVowel(char c)
{
  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return true;
  return false;
}

void sync(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
}


int main(){
  sync();
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    init(a,n);
    string s;
    cin>>s;
    vector<pair<ll,ll>> p,p1;
    for(ll i=0;i<n;i++)
    {if(s[i]=='1')p.pb({a[i],i});
    else p1.pb({a[i],i});}
    sortv(p);
    sortv(p1);
    vector<ll> ans(n);
    ll x=p.size();
    for(ll i=x-1;i>=0;i--)ans[p[i].second]=n--;
    x=p1.size();
    for(ll i=x-1;i>=0;i--)ans[p1[i].second]=n--;
    
    print(ans);
  }
}
