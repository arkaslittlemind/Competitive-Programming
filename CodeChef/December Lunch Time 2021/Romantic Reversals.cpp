Question Link- https://www.codechef.com/LTIME103C/problems/RMNTREV

#include<bits/stdc++.h>
using namespace std;
#define forr(i,n) for(int i=0; i<n; i++)
#define pb push_back
#define mp make_pair
#define el "\n"
#define accuracy setprecision(20)
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pair<int, int>>
#define mii map<int, int>
typedef long long int ll;
#define F first
#define S second
#define deb(x) cout << #x << " " << x << "\n";
#define IamSpeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long double ld;
  
void solve(int T)
{
    int n,k; 
    string s; 
    cin>>n>>k>>s;
    char answer[k];
    int flag=0;
    if(k&1)
    {
        for (int i = k; i >= 1; i-=2)
        {
            answer[i-1] = s[flag++];
        }
        for (int i = 2; i < k; i+=2)
        {
            answer[i-1] = s[flag++];
        }
        
        
    }
    else
    {
        for (int i = k; i >= 2; i-=2)
        {
            answer[i-1] = s[flag++];
        }
        for (int i = 1; i < k; i+=2)
        {
            answer[i-1] = s[flag++];
        }
    }
    
    for (int i= 0; i < k; i++) cout << answer[i];
    for (int i = k; i < n; i++)
    {
        cout << s[i];
    }
    cout << endl;
    
}


int main()
{
    

int t=1;
cin>>t;
while (t--)
{
solve(t);
}

return 0;
}
